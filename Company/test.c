#define _CRT_SECURE_NO_WARNINGS 1


#include "add.h"

#pragma comment(lib, "add.lib")

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = add(a, b);
	printf("%d\n", ret);
	return 0;
}