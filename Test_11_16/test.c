#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
////int main()
////{
////	int a = 3;
////	int b = 5;
////
////	a = a ^ b;
////	b = a ^ b;
////	a = a ^ b;
////	printf("%d %d\n", a, b);
////	return 0;
////}
//
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 - a的原反补码
//	int b = -5;
//    //10000000000000000000000000000101 - b的原码
//	//11111111111111111111111111111010 - b的反码
//	//11111111111111111111111111111011 - b的补码
//	int ret = a ^ b;
//	//00000000000000000000000000000011 - a的原反补码
//	//11111111111111111111111111111011 - b的补码
//	// 
//	//11111111111111111111111111111000 - ret的补码
//	//10000000000000000000000000000111
//	//10000000000000000000000000001000 - ret的原码
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int* p = &a;
//	*p = 20;
//	printf("%d", a);
//	return 0;
//}