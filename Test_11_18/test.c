#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	while (scanf("%d %d", &n, &m) != EOF)
//	{
//		int t = 0;
//		int sum = 0;
//		for (i = 0; i < n; i++)
//		{
//
//			int j = 0;
//			for (j = 0; j < m; j++)
//			{
//				scanf("%d", &t);
//				if (t > 0)
//				{
//					sum += t;
//				}
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//void fun(int n)
//{
//	if (n >= 6)
//		fun(n / 6);
//
//	printf("%d", n % 6);
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int arr[10][10] = {0};
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100] = {0};
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	scanf("%d", &del);
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}