#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int count = 0;
//	unsigned int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int Numberof1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Numberof1(n);
//	printf("%d\n", ret);
//	return 0;
//}

//
//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Numberof1(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int find_diff(int n, int m)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if(((n >> i) & 1) != ((m >> i) & 1))
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int ret = find_diff(n, m);
//	printf("%d\n", ret);
//	return 0;
//}


//int find_diff(int n, int m)
//{
//	int tmp = n ^ m;
//	int count = 0;
//
//	while (tmp)
//	{
//		tmp = (tmp & (tmp - 1));
//			count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int ret = find_diff(n, m);
//	printf("%d\n", ret);
//	return 0;
//}

//void Leap_year(int y, int m)
//{
//		if (m == 2)
//		{
//			if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//				printf("29\n");
//			else
//				printf("28\n");
//		}
//		else if (m == 4 || m == 6 || m == 9 || m == 11)
//			printf("30\n");
//		else
//			printf("31\n");
//}
//
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		Leap_year(y, m);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n = n / 6;
//	}
//	for (--i; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

