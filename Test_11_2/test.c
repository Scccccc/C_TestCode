#define _CRT_SECURE_NO_WARNINGS 1


//
#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}


//int main()
//{
//	float a[5] = { 0 };
//	float sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%f", &a[j]);
//			sum += a[j];
//		}
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%.lf ", a[j]);
//		}
//		printf("%.lf\n", sum);
//		sum = 0;
//
//	}
//
//	return 0;
//}
//

//int main()
//{
//    double a[5] = { 0 };       //初始化数组
//    double sum = 0;
//    for (int j = 0; j < 5; j++)
//    {
//        for (int i = 0; i < 5; i++)
//        {
//            scanf("%lf", &a[i]);  //录入分数
//            sum = a[i] + sum;    //及时把录入的分数加起来
//        }
//        for (int i = 0; i < 5; i++)
//        {
//            printf("%.1f ", a[i]);//打印每一个分数，注意空格
//        }
//        printf("%.1f\n", sum);    //总分打印完需要换行
//        sum = 0;                 //一行的总分算完后，及时初始化再进入下一个循环
//    }
//
//
//    return 0;
//
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}
//
//
//int main()
//{
//    int hour = 0;
//    int min = 0;
//    int sec = 0;
//    int second = 0;
//    scanf("%d", &second);
//    hour = second / 60 / 60;
//    min = (second / 60) % 60;
//    sec = second % 60;
//    printf("%d %d %d", hour, min, sec);
//    return 0;
//}
//
//



//int main()
//{
//    int t = 0;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t == 0)
//            printf("0.5\n");
//        else if (t > 0)
//            printf("1\n");
//        else
//            printf("0\n");
//    }
//
//    return 0;
//}