#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int line = 0;
//again:
//	scanf("%d", &line);
//	if (line > 9)
//	{
//		printf("wrong\n");
//		goto again;
//	}
//	for (i = 1; i <= line; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { -10, -9, -8, -7, -6, -5, -4, -3, -2, -1 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//************************************************************************************
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//************************************************************************************



////打印1-100之间带9的数字
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}

//递归实现斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}


//非递归实现斐波那契数
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//逆序打印字符串

//void reverse_string(char* arr)
//{
//	if (*arr != '\0')
//	{
//		reverse_string(arr + 1);
//	}
//	printf("%c", *arr);
//}
//	
//int main()
//{
//	char arr[] = "abcdef";
//	printf("abcdef\n");
//	reverse_string(arr);
//
//	return 0;
//}

//非递归实现n的阶乘

int Mul(int n)
{
	int i = 0;
	int sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}

//递归实现n的阶乘

//int Mul(int n)
//{
//	if (n <= 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Mul(n - 1);
//	}
//
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Mul(n);
	printf("%d\n", ret);
	return 0;
}