#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("*************************************\n");
//	return 0;
//}

//水仙花
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += ((i / j)* (i % j));
//			if (sum == i)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	float n = 0;
//	scanf("%f", &n);
//	printf("%d", ((int)n) % 10);
//	return 0;
//}




//冒泡排序
//void sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int tmp = 0;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	int sum = a + b;
//	printf("%d", sum);
//	return 0;
//}

