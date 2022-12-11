#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//递归逆序

// void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//
//	if (strlen(arr)>=2)
//	{
//		reverse_string(arr + 1);
//	}
//
//	*(arr + len - 1) = tmp;
//}

//非递归逆序

//void reverse_string(char* arr)
//{
//	char left = 0;
//	char right = strlen(arr)-1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abc";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}

//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1, };
//	int i = 0;
//	int tmp = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


void init(int* arr)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}

void print(int* arr)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int* arr, int sz)
{
	int left = 0;
	int right = sz-1;
	int tmp = 0;
	while (left<right)
	{
		tmp = arr[left];
		arr[left] =arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sz = sizeof(arr) / sizeof(arr[0]);


	init(arr);
	print(arr);
	reverse(arr, sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}