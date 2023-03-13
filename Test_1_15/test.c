#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	FILE* ps = fopen("test.txt", "r");
//	if (ps == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//关闭文件
//	fclose(ps);
//	ps = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* ps = fopen("test.txt", "r");
//	if (ps == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	char buf[20] = { 0 };
//	fgets(buf, 6, ps);
//	printf("%s\n", buf);
//	//关闭文件
//	fclose(ps);
//	ps = NULL;
//	return 0;
//}