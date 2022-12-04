#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int find = 7;
//	int left = 0;
//	int right = 9;
//	int mind = 0;
//	int flag = 0;
//	while (left <= right)
//	{
//		mind = (left + right) / 2;
//
//		if (arr[mind] < find)
//		{
//			left = mind+1;
//		}
//		else if (arr[mind] > find)
//		{
//			right = mind -1;
//
//		}
//		else
//		{
//			printf("found number.%d\n", mind);
//			flag = 1;
//			break;
//		}
//
//	}
//	if (flag == 0)
//	{
//		printf("could not find\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int b = 1;
//	int a = b % 3;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = j * i;
//			printf("%d * %d = %d  ", i, j, sum);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = 9;
	int mind = 0;
	int num = 0;
	int flag = 0;
	scanf("%d", &num);
	while (left <= right)
	{
		mind = (left + right) / 2;

		if (arr[mind] > num)
		{
			right = mind - 1;
		}
		else if (arr[mind] < num)
		{
			left = mind + 1;
		}
		else
		{
			printf("find it.%d", mind);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("cant find it\n");
	}
	return 0;
}


//
//int main()
//{
//	float i = 0.0f;
//	float sum = 0.0f;
//	float c = 0.0f;
//	for (i = 1; i <= 100; i+=2)
//	{
//		c = (1/i) - 1 / (i+1);
//		sum += c;
//	}
//	printf("%f", sum);
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int const1 = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			const1++;
//		}
//	}
//	printf("%d ", const1);
//	return 0;
//}