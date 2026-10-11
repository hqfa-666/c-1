#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"



void menu()
{
	printf("-----1.play-----\n");
	printf("-----0.exit-----\n");
	printf("请输入；");

}
void game()
{
	char arr1[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	int row = 0;
	int col = 0;
	int mine = 0;
	int level = 0;

	//选择难度
	printf("请选择难度：1.简单(9*9,10个雷) 2.中等(16*16,40个雷) 3.困难(30*16,99个雷)\n");
	scanf("%d", &level);
	switch (level)
	{
	case 1:
		row = 9;  col = 9;  mine = EASY_COUNT;
		break;
	case 2:
		row = 16; col = 16; mine = MID_COUNT;
		break;
	case 3:
		row = 16; col = 30; mine = HARD_COUNT;
		break;
	default:
		printf("输入错误，默认使用简单难度\n");
		row = 9;  col = 9;  mine = EASY_COUNT;
		break;
	}

	//初始化
	initboard(arr1, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');
	// 打印棋盘
	//displayboard(arr1, row, col);
	displayboard(show, row, col);
	//布置雷
	setmine(arr1, row, col, mine);
	//displayboard(arr1, row, col);
	//扫雷
	findmine(arr1, show, row, col, mine);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}

	} while (input);

	return 0;
}
