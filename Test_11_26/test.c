#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//int my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello000";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


unsigned int my_strlen(const char* arr)
{
	assert(arr != NULL);
	int count = 0;
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	printf("%d\n", my_strlen(arr));
	return 0;
}