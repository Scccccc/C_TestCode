#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	/*int arr[5] = { 0,1,2,3,4 };
//	int(*parr)[5] = &arr;
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("%d ", arr[*(*parr) + i]);
//	}*/
//
//	int (*pfuc)(int, int);
//	
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//
//	int (*pfuc)(int, int) = &Add;//函数指针的定义
//	//int n = Add(100, 200);//正常调用函数
//
//	int n = (*pfuc)(100, 200);//使用函数指针调用
//	printf("%d\n", n);
//
//	return 0;
//}

void Callback_1(int x)   ///回调函数
{
    printf("Hello, this is Callback_1: x = %d ", x);
}


void Fuc(int x, void (*Callback)(int)) // 函数指针定义作为参数
{
    Callback(x);//通过函数指针调用
}

int main()
{
    Fuc(4, Callback_1);
    return 0;
}
