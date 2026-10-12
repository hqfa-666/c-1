#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void initboard(char board[ROWS][COLS], int r, int z, char set)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < z; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[ROWS][COLS], int r, int z)
{
	int j = 0;
	int i = 0;
	for (j = 0; j <= z; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= z; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void setmine(char arr1[ROWS][COLS], int r, int z, int mine)
{
	int count = mine;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % z + 1;
		if (arr1[x][y] != '1')
		{
			arr1[x][y] = '1';
			count--;
		}
	}
}

// 此函数仅支持 findmine周围8个格子中雷的数量
static int GetMineCount(char arr1[ROWS][COLS], int x, int y)
{
	return arr1[x - 1][y] + arr1[x - 1][y - 1] + arr1[x][y - 1] + arr1[x + 1][y - 1] +
		arr1[x + 1][y] + arr1[x + 1][y + 1] + arr1[x][y + 1] + arr1[x - 1][y + 1] - 8 * '0';
}

// 展开一片（递归）
static void expand(char arr1[ROWS][COLS], char show[ROWS][COLS], int r, int z, int x, int y, int* win)
{
	// 坐标合法性检查
	if (x < 1 || x > r || y < 1 || y > z)
		return;

	// 只处理未排查的格子，且不是雷
	if (show[x][y] != '*' || arr1[x][y] == '1')
		return;

	int count = GetMineCount(arr1, x, y);
	if (count > 0)
	{
		// 周围有雷，显示数字，停止展开
		show[x][y] = (char)(count + '0');
		(*win)++;
	}
	else
	{
		// 周围无雷，显示 0 并继续展开周围 8 个格子
		show[x][y] = '0';
		(*win)++;
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (i == x && j == y)
					continue;
				expand(arr1, show, r, z, i, j, win);
			}
		}
	}
}

void findmine(char arr1[ROWS][COLS], char show[ROWS][COLS], int r, int z, int mine)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int op = 0;
	int first = 1;				// 标记是不是第一次排雷
	time_t start = time(NULL);	// 开始计时

	while (win < r * z - mine)
	{
		printf("请选择：1.排查雷  2.标记雷(标记为#，再标记一次取消)\n");
		scanf("%d", &op);
		printf("请输入排查的坐标");
		scanf("%d%d", &x, &y);

		// 判断坐标的合法性（这里把原来的 & 改成了 &&）
		if (x >= 1 && x <= r && y >= 1 && y <= z)
		{
			// 标记雷
			if (op == 2)
			{
				if (show[x][y] == '*')
				{
					show[x][y] = '#';
				}
				else if (show[x][y] == '#')
				{
					show[x][y] = '*';
				}
				else
				{
					printf("该坐标已被排查，不能标记\n");
				}
				displayboard(show, r, z);
				continue;
			}

			// 判断坐标是否被排查过
			if (show[x][y] == '*')
			{
				// 第一次排雷踩到雷时，把这颗雷挪到别的位置，保证第一次不会被炸死
				if (first == 1 && arr1[x][y] == '1')
				{
					int nx = 0;
					int ny = 0;
					do
					{
						nx = rand() % r + 1;
						ny = rand() % z + 1;
					} while (arr1[nx][ny] != '0');
					arr1[nx][ny] = '1';
					arr1[x][y] = '0';
				}
				first = 0;

				if (arr1[x][y] == '1')
				{
					// 踩雷，游戏结束
					printf("很遗憾，你死了\n");
					displayboard(arr1, r, z);
					printf("已经消耗的时间：%d 秒\n", (int)(time(NULL) - start));
					break;
				}
				else
				{
					// 安全，调用展开函数（自动展开一片）
					expand(arr1, show, r, z, x, y, &win);
					displayboard(show, r, z);
					printf("已经消耗的时间：%d 秒\n", (int)(time(NULL) - start));
				}
			}
			else if (show[x][y] == '#')
			{
				printf("该坐标已被标记，请先取消标记再排查\n");
			}
			else
			{
				printf("该坐标已被排查，请重新输入坐标\n");
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入\n");
		}
	}

	if (win == r * z - mine)
	{
		printf("恭喜你，完成游戏，共用时 %d 秒\n", (int)(time(NULL) - start));
	}
}