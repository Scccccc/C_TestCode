#define _CRT_SECURE_NO_WARNINGS 1

#include "test.h"
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = max(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//void print()
//{
//	printf("1 ");
//}
//
//void loop_print()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		print();
//	}
//}
//
//int main()
//{
//	loop_print();
//	return 0;
//}

int main()
{
    char arr[20] = "hello";
    int ret = strlen(strcat(arr, "bit"));
    printf("%d\n", ret);
    return 0;
}
