#define _CRT_SECURE_NO_WARNINGS 1

#include <stddef.h>
#include <stdio.h>


//定义offsetof宏
//struct MyStruct
//{
//	char ch;
//	int i;
//	char c2;
//};
//
//#define OFFSETOF(type, member)   (size_t)&(((type*)0)->member)
//
//int main()
//{
//	
//	printf("%d\n", OFFSETOF(struct MyStruct, ch));
//	//printf("%d\n", (size_t)&(((struct Mystruct*)0)->ch))
//	printf("%d\n", OFFSETOF(struct MyStruct, i));
//	printf("%d\n", OFFSETOF(struct MyStruct, c2));
//
//	return 0;
//}

//定义一个宏，交换二进制的技术位和偶数位


#define SWAP(x)  (((x&0x55555555)<<1) + ((x&0xaaaaaaaa)>>1))
int main()
{
	int a = 10;
	a = SWAP(a);
	printf("%d\n", a);
	return 0;
}