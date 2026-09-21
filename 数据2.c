#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include<stdbool.h>
//#define M 100

int main()
{
	//printf("%zd", sizeof(long double));
	//_Bool flag = true;
	//	if (flag)
	//		printf("i like c");
	//int n = 0;
	//for (n = 32;n <= 127;n++)
	//{
	//	printf("%c ", n);
	//}
	//printf("M = %d\n", M);
	//int x = 4 + 22;
	//int y = 61 - 23;
	//printf("%d\n", x);
	//printf("%d\n", y);
	//int num = 100;
	//	printf("1:%d\n", num);
	//	num = 0;
	//	printf("2:%d\n", num);
	// const int num = 100;//const为常量，1
	//                      //为错误提示  1
	//printf("1:%d\n", num);//            1
	//num = 0;              //            1
	//printf("2:%d\n", num);//            1
	 //   int a = 9;
		//int b = 4;
		//double z = a / b;
		//printf("%f\n", z);
	//int a = 500;
	//int b = 2;
	//int z = a/ b;
	//printf("%d\n", z);
	//float a = 1.0f;
	//	float b = 2.0f;
	//	float z = a / b;
	//	printf("%f\n", z);
	//double a = 500.0;
	//double b = 2.0;
	//	double z = a / b;
	//	printf("%f\n", z);
	//printf("%d-%d-%d\n", 2026, 12, 12);
	//printf("%f\n", 3.14);
	//printf("%d\n", 100);
	//printf("%c\n", 100);
	//int a = 0;//错误代码    
	//int b = 0;
	//scanf("%d", &a);
	//	printf("%d", b);   
	//	char c = 0;
	//scanf("%c", &c);
	//printf("%c", c);
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);

	double average = (num1 + num2) / 2.0;

	printf("%f\n", average);

	return 0;
}

    