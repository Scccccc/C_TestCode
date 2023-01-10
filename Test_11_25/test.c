#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//void even_odd(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i+=2)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 1; i < sz; i += 2)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	even_odd(arr, sz);
//	return 0;
//}

//
//void Bubble_sorf(int* arr1, int* arr2, int n, int m)
//{
//	int x = 0;
//	int	y = 0;
//	while (y < m || x < n)
//	{
//		if (arr1[x] < arr2[y] && x < n)
//		{
//			printf("%d ", arr1[x]);
//			x++;
//		}
//		else if (y < m)
//		{
//			printf("%d ", arr2[y]);
//			y++;
//		}
//		else
//		{
//			printf("%d ", arr1[x]);
//			x++;
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	Bubble_sorf(arr1, arr2, n, m);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	int flag1 = 1;
//	int flag2 = 1;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//判断
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] >= arr[i + 1])
//			;
//		else
//			flag1 = 0;
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] <= arr[i + 1])
//			;
//		else
//			flag2 = 0;
//	}
//	if (flag1 || flag2)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//
//	return 0;
//}