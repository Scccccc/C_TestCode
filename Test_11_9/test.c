#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//    printf("Hello Nowcoder!\n");
//    return 0;
//}


//sizeof-操作符-专门来计算大小的

//int main()
//{
//	printf("The size of short is %d. bytes\n", sizeof(short));
//	printf("The size of int is %d. bytes\n", sizeof(int));
//	printf("The size of long is %d. bytes\n", sizeof(long));
//	printf("The size of long long is %d. bytes\n", sizeof(long long));
//
//	return 0;
//}


//%o打印八进制数字
//%x打印16进制数字
//
//int main()
//{
//	printf("0%o 0x%x", 1234, 1234);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	while (n != 0)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

int main()
{
	char ch = 0;

	while ((ch = getchar()) != EOF)
	{
		putchar(ch + 32);
		getchar();
		printf("\n");

	}

	return 0;
}