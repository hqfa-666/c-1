#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

//void menu()
//{
//	printf("-----------------\n");
//	printf("---- 1.play  ----\n");
//	printf("---- 0.exit  ----\n");
//	printf("-----------------\n");
//	
//}
//
//void game()
//{
//	int guess = 0;
//	int r = rand() % 100 + 1;
//	
//	while (1)
//	{
//		printf("请输入要猜的数字:");
//		scanf("%d", &guess);
//		if (guess > r)
//			printf("猜大了\n");
//		else if (guess < r)
//			printf("猜小了\n");
//		else
//		{
//			printf("猜对了,随机数为%d\n", r);
//			break;
//		}
//	}
//	
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//
//	do 
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误，请重新选择");
//			break;
//		}
//	} while (input);
//
//
//		return 0;
//}
  




//void menu()
//{
//    printf("-----------------\n");
//    printf("---- 1.play  ----\n");
//    printf("---- 0.exit  ----\n");
//    printf("-----------------\n");
//}
//
//void game()
//{
//    int guess = 0;
//    int r = rand() % 100 + 1;
//
//    int count = 0;                       // 新增：记录输入次数
//    time_t start_time = time(NULL);      // 新增：开始计时
//
//    while (count < 5)
//    {
//        printf("请输入要猜的数字:");
//        scanf("%d", &guess);
//        count++;
//
//        if (guess > r)
//            printf("猜大了\n");
//        else if (guess < r)
//            printf("猜小了\n");
//        else
//        {
//            printf("猜对了,随机数为%d\n", r);
//            break;
//        }
//    }
//
//    printf("本局用时：%.0f秒\n", difftime(time(NULL), start_time));
//
//    if (guess != r)
//    {
//        printf("5次机会已用完，随机数为%d\n", r);
//        exit(0);                         // 5次没猜中，结束整个程序
//    }
//}
//
//int main()
//{
//    srand((unsigned int)time(NULL));
//    int input = 0;
//
//    do
//    {
//        menu();
//        printf("请选择:");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("退出游戏");
//            break;
//        default:
//            printf("选择错误，请重新选择");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}




int main()
{
	//char arr[10] = "abc";
	//printf("%zu\n", strlen(arr));
	//printf("%zu\n", sizeof(arr));	
	//char arr[10] = { 'a','b','c' };
	//printf("%zu\n", strlen(arr));
	//printf("%zu\n", sizeof(arr));
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//for (i = 9;i >=0;i--)
	//{
	//	printf("%d ", arr[i]);
	//}
	//              给数组输入想要的值
	//int arr[10] = { 0 };
	//int i = 0;
	//for (i = 0;i < 10;i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//for (i = 0;i < 10;i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//int arr[5] = { 0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int i = 0;
	//for (i = 0;i < sz;i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//for (i = 0;i < sz;i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	
	//char arr1[] = { "weclome to china" };
	//char arr2[] = { "****************" };
	//int left = 0;
	//int right = strlen(arr1) - 1;
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(100);
	//	left++;
	//	right--;
	//	

	//}

	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr1[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr1[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
}








	return 0;
}