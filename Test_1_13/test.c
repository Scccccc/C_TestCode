#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//int main()
//{
//	
//		char* str = NULL;
//		str = GetMemory();
//		printf(str);
//
//	return 0;
//}

//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}

//模拟实现strncpy

//char* my_strcpy(char* dst, const char* src, int num)
//{
//	assert(dst && src);
//	char* start = dst;
//	while (num--)
//	{
//		*dst = *src;
//		dst++;
//		src++;
//	}
//	return dst;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] = "Hello world";
//	int num = 0;
//	scanf("%d", &num);
//	my_strcpy(arr1, arr2, num);
//	printf("%s", arr1);
//	return 0;
//}

//模拟实现strncat

char* my_strcat(char* dst, const char* src, int num)
{
	assert(dst && src);
	char* startp = dst;
	while (*dst != '\0')
	{
		dst++;
	}
	while (num--)
	{
		*dst = *src;
		dst++;
		src++;
	}
	return startp;
}

int main()
{
	char arr1[20] = "Hello ";
	char arr2[] = "world";
	int num = 0;
	scanf("%d", &num);
	char* ret = my_strcat(arr1, arr2, num);
	printf("%s\n", ret);
	return 0;
}