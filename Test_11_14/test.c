#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("study hard\n");
//	}
//	return 0;
//}

//void swap(int a[], int b[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//}
//
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	swap(a, b, sz);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", b[i]);
//	}
//
//	return 0;
//}

//打印函数
//逆序函数
//初始化函数

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void inti_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);

	reverse_arr(arr, sz);
	print(arr, sz);

	inti_arr(arr, sz);
	print(arr, sz);

	return 0;
}