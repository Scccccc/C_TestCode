#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>



//添加逗号
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    char arr[14] = { 0 };
//    int i = 0;
//    int k = 0;
//    while (n)
//    {
//        if (k != 0 && k % 3 == 0)
//            arr[i++] = ',';
//
//        arr[i++] = (n % 10) + '0';
//        n = n / 10;
//        k++;
//    }
//    int j = 0;
//    for (j = i - 1; j >= 0; j--)
//    {
//        printf("%c", arr[j]);
//    }
//
//    return 0;
//}

//删除公共字符串
int if_not_exist(char ch, char* str)
{
    while (*str)
    {
        if (ch == *str)
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int main()
{
    char arr1[100] = { 0 };
    char arr2[100] = { 0 };
    gets(arr1);
    gets(arr2);
    int sz = strlen(arr1);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        if (if_not_exist(arr1[i], arr2))
        {
            printf("%c", arr1[i]);
        }
    }
    return 0;
}