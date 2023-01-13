#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//void Print_init(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	Print_init(arr);
//	return 0;
//}


#include <stdio.h>
#include <string.h>

//字符串逆序

//void reverse(char* arr, int len)
//{
//    char left = 0;
//    char right = len - 1;
//    while (left < right)
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    reverse(arr, len);
//
//    printf("%s\n", arr);
//    return 0;
//}

//倒置字符串
//void reverse(char* left, char* right)
//{
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[100] = { 0 };
//    //输入
//    gets(arr);
//    int len = strlen(arr);
//    //字符串逆序
//    reverse(arr, arr + len - 1);
//    //单词逆序
//    char* str = arr;
//    while (*str)
//    {
//        char* start = str;
//        while (*str != ' ' && *str != '\0')
//        {
//            str++;
//        }
//        reverse(start, str - 1);
//        if(*str != '\0')
//            str++;
//    }
//    printf("%s\n", arr);
//
//    return 0;
//}

//int gcd(int a, int b)
//{
//    int tmp = 0;
//    while (b)
//    {
//        tmp = a % b;
//        a = b;
//        b = tmp;
//    }
//    return a;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int m = gcd(a, b);
//    printf("%d\n", a * b / m);
//
//    return 0;
//}


//求最大公倍数
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int i = 1;
//    while (a * i % b != 0)
//    {
//        i++;
//    }
//    printf("%d\n", i * a);
//
//    return 0;
//}