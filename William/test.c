#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <string.h>


//int f(char a[]);
//
//int main()
//{
//	char arr[] = { "abcde" };
//	printf("%d\n", f(arr));
//	return 0;
//}
//
//int f(char a[])
//{
//	int i = 0;
//	if (a[i] != '\0')
//	{
//		i++;
//		return 1 + f(&a[i]);
//	}
//	else
//		return 0;
//}

//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//
//int main()
//{
//	system("shutdown -s -t 60");
//	printf("Type 'my dick short' or after 60s shutdown\n");
//	char input[20] = { 0 };
//again:
//	//scanf("%s", input);
//	gets(input);
//	if (strcmp(input, "my dick short") == 0)
//	{
//		system("shutdown -a");
//		printf("GOOD BOY:)");
//	}
//	else
//	{
//		printf("Wrong!!!Type again\n");
//		goto again;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return  0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	//*pc = 0;   //重点在调试的过程中观察内存的变化。
//	*pi = 0;   
//	return 0;
//}

//int* Test()
//{
//	int n = 10;
//	return &n;
//
//}
//
//int main()
//{
//	int* p = Test();
//	printf("%d\n", *p);
//	return 0;
//}

//
////#include <stdio.h>
//int main()
//{
//    int* p = NULL;
//    int a = 10;
//    p = &a;
//    if (p != NULL)
//    {
//        *p = 20;
//    }
//    return 0;
//}


//int my_strlen(char* arr)
//{
//	char* start = arr;
//	while (*arr != '\0');
//	{
//		arr++;
//	}
//	return arr-start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}