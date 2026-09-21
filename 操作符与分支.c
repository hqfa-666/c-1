#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	//int a = 10;
	//a = 5;
	//a = a + 10;
	//a += 10;
	//printf("%d\n", a);
	// 
	// 
	//int n = 10;
	//n++;
	//n--;
	//printf("%d\n", n);
	// 
	// 
	//int a = 10;
	//int b = a++;
	//printf("a=%d\n", a);
	//printf("b=%d\n", b);//输出值为a=11，而b=10
	//int a = 10;
	//int b = ++a;
	//printf("a=%d\n", a);
	// 
	// 
	//printf("b=%d\n", b);//输出值为a=11，b=11//--前置与后置同理可得
	//int a = 10;
	//printf("%d\n", a);
	//printf("%d\n", -a);
	// 
	// 
	//int a = 10;
	//int b = 3;
	//float r = (float)a / b;
	//	printf("%f\n", r);


	//int a = 0;
	//scanf("%d", &a);
	//if (a % 2 == 1)
	//printf("奇数\n");


	//int n = 0;
	//scanf("%d", &n);
	//if (n % 2 == 1)
	//printf("奇数\n");
	//else
	//	printf("偶数\n");

	//int m = 0;
	//scanf("%d", &m);

	//if (m >= 60)
	//	printf("拿捏拿捏\n");
	//else
	//	printf("补考补考\n");
	//
	//int m = 0;
	//scanf_s("%d", &m);
	//if (m >= 60)
	//	printf("庆祝\n");
	//else
	//	printf("补考补考\n");

	//int age = 0;
	//scanf("%d", &age);
	//if (age >= 18)
	//	printf("成年\n");
	//else
	//	printf("未成年\n");

	//int total = 0;
	////输入总价
	//scanf("%d", &total);
	//if (total >= 50)
	//	printf("满50，优惠15，实际付款；%d\n", total - 15);
	//else if (total >= 30)
	//	printf("满30，优惠8，实际付款；%d", total - 8);
	//else if (total >= 20)
	//	printf("满20，优惠5，实际付款：%d\n", total - 5);
	//else

	//	printf("不满20，无法参加活动\n");
	//



 //   float total = 0;                                        //float中scanf必须以("%f",   )的形式
	////输入总价                                              //而double中scanf为("%lf",    )的形式
	//scanf("%f", &total);
	//if (total >= 50)
	//	printf("满50，优惠15，实际付款；%.2f\n", total - 15);
	//else if (total >= 30)
	//	printf("满30，优惠8，实际付款；%.2f\n", total - 8);
	//else if (total >= 20)
	//	printf("满20，优惠5，实际付款：%.2f\n", total - 5);
	//else

	//	printf("不满20，无法参加活动\n");






	//double total = 0;
	////输入总价
	//scanf("%lf", &total);
	//if (total >= 50)
	//	printf("满50，优惠15，实际付款: %.2f\n", total - 15);
	//else if (total >= 30)
	//	printf("满30，优惠8，实际付款:  %.2f\n", total - 8);
	//else if (total >= 20)
	//	printf("满20，优惠5，实际付款： %.2f\n", total - 5);
	//else

	//	printf("不满20，无法参加活动\n");


//int shejingliang = 0;
//
//scanf("%d", &shejingliang);
//
//if (shejingliang >= 100)
//printf("超人\n");
//else
//printf("虚\n");


//int minute = 0;
//scanf("%d", &minute);
//if (minute <= 1)
//printf("有戏\n");
//else if (minute <10)
//printf("在忙\n");
//else if (minute <60)
//printf("打游戏\n");
//else
//printf("没戏\n");
//

//int score = 0;                               //嵌套if函数
//int is_fill = 0;
//int is_warn = 0;
//scanf("%d%d%d", &score, &is_fill, &is_warn);
////判断
//if (score >= 85)
//{//3
//	if (is_fill == 0)
//	{//2
//		if (is_warn == 0)
//		{//1
//			printf("有奖学金");
//		}
//		else
//		{
//			printf("处分");
//		}
//	    }//1
//	else
//	{
//		printf("挂科"); 
//	}
//	}//2
//    else
//{
//	printf("不及格");
//}//3

//111111111111111111111111111111111111111111111111111111111111
//else与if就近匹配


//int jj = 0;
//int ass = 0;
//int sizeofchest = 0;
//scanf("%d%d%d", &jj, &ass, &sizeofchest);
//
//if (jj == 0)
//{
//	if (ass>10) 
//	{
//		if (sizeofchest>10)
//		{
//			printf("不是男娘");
//		}
//		else
//		{
//			printf("萝莉");
//		}
//		 }
//	else
//	{
//		printf("小屁股");
//	}
//	}
//else
//{ 
//	printf("是男娘");
//}
//


//int jj = 0;
//int ass = 0;
//int sizeofchest = 0;
//scanf("%d", &sizeofchest);
//
//if (sizeofchest < 1)
//{
//	printf("大熊");
//	if (jj == 0) 
//	{
//		printf("男的");
//		if (ass > 1)
//		{
//			printf("是男娘");
//		}
//		else
//		{
//			printf("lelele");
//		}
//	}
//	else
//	{
//		printf("lele");
//	}
//}
//else
//{
//	printf("不是男娘");
//}
//

	



                



//111111111111111111111111111111111111111111111111111
//int a = 2;
//int b = 3;
//int c = 4;
//if (a < c < b)
//printf("haha\n");//证明多个关系运算符不宜连用

                 //解决方法

//int a = 2;
//int b = 3;
//int c = 4;
//if (a < c && c < b)//&&是并且的意思  
//printf("haha\n");

printf("---%5d---\n", 123);//右对齐
printf("---%-5d---\n", 123);//左对齐 
printf("%f\n", 123.1);//默认打印后6位
printf("%12f===\n", 123.1);  //123.100000 ===































	return 0;
}