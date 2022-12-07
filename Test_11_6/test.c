#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <windows.h>

//int main()
//{
//	system("shutdown -s -t 60");
//	char input[20] = { 0 };
//
//again:
//	printf("Print PORN,if not will shutdown after 60s\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "PORN") == 0)
//	{
//		system("Shutdown -a");
//		printf("Welldown!\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	char * ret = strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//
//int mul_table(int x, int y, int sum)
//{
//	sum = x * y;
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	for (a = 1; a < 10; a++)
//	{
//		int b = 0;
//		for (b = 1; b <= a; b++)
//		{
//			int ret = mul_table(a, b, sum);
//			printf("%d * %d = %d   ", a, b, ret);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void * swap(int * pa, int * pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}


int prime(int x)
{
	int j = 0;
	for (j = 2; j <= sqrt(x); j+=2)
	{
		if (x % j == 0)
			return 0;
		else
			return 1;
	}
}


int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (prime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}