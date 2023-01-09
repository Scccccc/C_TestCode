#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//打印菱形
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n-i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n-i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//打印菱形
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n-i-1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < 2*i+1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n-1; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < 2*(n-1-i)-1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <math.h>
////水仙花
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp>9)
//		{
//			tmp = tmp / 10;
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}


//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int ex = money;
//	int sum = ex;
//	int s = 0;
//	while (ex >= 1)
//	{
//		ex += s;
//		sum += ex / 2;
//		s = ex % 2;
//		ex = ex / 2;
//		
//	}
//	printf("一共可以喝到：%d瓶\n", sum);
//	
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20][20] = { 0 };
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if ((i - j > 0) && (arr[i][j] != 0))
//			{
//				flag = 0;
//			}
//		}
//	}
//	if (flag)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] != arr2[i][j])
//				flag = 0;
//		}
//	}
//	if (flag)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}