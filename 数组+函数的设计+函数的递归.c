#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

 
//int main()
//{
    //int arr1[3][5] =
    //{
    //    1,2,3,4,5,2,3,4,5,6,3,4,5,6,7
    //};
    //int n = 0;
    //for (n = 0;n < 3;n++)
    //{
    //    int j = 0;
    //    for (j = 0;j < 5;j++)
    //    {
    //        printf("%d ", arr1[n][j]);
    //   }
    //    printf("\n");
    //}
    // return 0;
//}


        //int index1 = 0;
        //int index2 = 0;

        //char students[20][20] = {
        //    "张伟", "王伟", "李娜", "刘洋", "陈静",
        //    "杨明", "赵敏", "黄磊", "周杰", "吴婷",
        //    "徐浩", "孙丽", "马超", "朱琳", "胡军",
        //    "郭强", "何芳", "高峰", "林雪", "罗斌"
        //};

        //srand((unsigned int)time(NULL));

        //do
        //{
        //    index1 = rand() % 20;
        //    index2 = rand() % 20;
        //} while (index1 == index2);

        //printf("找到了：%s\n找到了：%s\n",
        //    students[index1], students[index2]);



    // 自定义函数
    //int average(int x, int y)
    //{
    //    return(x+(y-x)/2);
    //}
    //int main()
    //{
    //    int a = 0;
    //    int b = 0;
    //    scanf("%d%d", &a, &b);
    //        int avg = average(a, b);
    //        printf("%d\n", avg);

    //    return 0;
    //}
    //void test()   
    //{
    //    int k = 0;
    //    scanf("%d", &k);
    //    printf("hehe\n");
    //        if (k > 5)
    //            return;

    //    printf("haha\n");
    //}
    //int main()
    //{
    //    test();
    //        return 0;
    //}


//
//void test()
//{
//    int i = 0;
//    for (i = 0;i <= 10;i++)
//    {
//        if (i == 5)
//            // break;
//            return;
//        printf("%d ",i);
//    }
//    printf("haha");//0 1 2 3 4 
//}
//int main()
//{
//
//    test();
//
//    return 0;
//}
//void change_arr(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0;i < sz;i++)
//    {
//        arr[i] = -1;
//
//    }
//}
// void printf_arr(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0;i < sz;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    printf_arr(arr, sz);
//    change_arr(arr, sz);
//    printf_arr(arr, sz);
//
//
//    return 0;
//}
// 
// 
// 
// 
//                                   打印数组元素

//void is_test(int arr2[],int z)
//{
//    int i = 0;
//    for (i = 0;i <z ;i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//}
//int main()
//{
//    int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int len = sizeof(arr1) / sizeof(arr1[0]);
//    is_test(arr1,len);
//   
//   return 0;
//}

//                     判断每年每月中有几天

//is_leap_year(int r)
//{
//    if (r % 4 == 0 && r % 100 != 0 || r % 400 == 0)
//        return 1;
//    else
//        return 0;
//
//}
//
// get_day_of_month(int y,int m)
//{
//     int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//     int d = days[m];
//     if (is_leap_year(y) && m == 2)
//     {
//         d += 1;
//     }
//         return d;
//}
//int main()
//{
//    int year = 0;
//    int month = 0;
//    scanf("%d%d", &year, &month);
//    int day = get_day_of_month(year, month);
//    printf("%d", day);
//
//
//    return 0;
//}
//

//不考虑溢出
//int main()
//{
//    int set = 1;
//    int i = 0;
//    int j = 0;
//    scanf("%d", &j);
//    for (i = 1;i <= j;i++)
//    {
//        set *= i;
//    }
//    printf("%d", set);
//
//
//    return 0;
//}

//int main()
//{
//    int ret = 1;
//    int sum = 0;
//    int n = 0;
//
//    for (n = 1;n <= 3;n++)
//    {
//        ret = 1;
//        int i = 0;
//        for (i = 1;i <= n;i++)
//        {
//            ret *= i;
//        }
//        sum += ret;
//    }
//   
//    printf("%d", sum);
//
//
//    return 0;
//}
//
////
//int main()
//{
//    int ret = 1;
//    int sum = 0;
//    int n = 0;
//    int j = 0;
//    scanf("%d", &j);
//
//    for (n = 1;n <= j;n++)
//    {
//        ret = 1;
//        int i = 0;
//        for (i = 1;i <= n;i++)
//        {
//            ret *= i;
//        }
//        sum += ret;
//    }
//
//    printf("%d", sum);
//
//
//    return 0;
//}
////                                函数的递归
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//int Fact(int a)
//{
//    if (a == 0)
//        return 1;
//    else
//        return a * Fact(a - 1);
//}
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int r = Fact(a);
//    printf("%d",r);
//
//    return 0;
//}

//void print(n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//    printf("%d ",n%10);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//
//}
//int  Fib(n)
//{
//    if (n == 0)
//        return 0;
//    else if (n == 1)
//        return 1;
//    else
//        return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int r=Fib(n);
//    printf("%d ", r);
//    return 0;
//}


//循环
int Fib(int n)
{
    int a = 0;
    int b = 1;
    int c = n;
    while (n >= 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;

}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int r = Fib(n);
    printf("%d", r);

    return 0;
}
//int Fib(int n) 
//{
//    int a = 0, b = 1;
//    while (n-- > 0) 
//    {
//        int t = a + b;
//        a = b;
//        b = t;
//    }
//    return a;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", Fib(n));
//    return 0;
//}