#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void print(unsigned int n)
//{
//	while (n)
//	{
//		printf("%d ", n % 10);
//
//		n /= 10;
//	}
//
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { 0 };
//	scanf("%s", &arr);
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", &arr);
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//


//int power(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * power(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//	return 0;
//}

//strlen的模拟（递归实现）
//递归和非递归分别实现strlen

//int My_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}

//int My_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + My_strlen(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[10] = "Hello";
//	int len = My_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
	
}
	

int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	return 0;
}