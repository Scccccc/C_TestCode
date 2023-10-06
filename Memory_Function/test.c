#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int* ptr = (int*)malloc(10 * sizeof(int));
//	if (NULL != ptr)//判断ptr指针是否为空
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			ptr[i] = 0;
//		}
//	}
//	free(ptr);//释放ptr所指向的动态内存
//	ptr = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	//如果p==NULL说明空间开辟失败
//	if (p == NULL)
//	{
//		perror("calloc fail");
//		return;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//    int* ptr = (int*)malloc(100);
//    if (ptr != NULL)
//    {
//        //业务处理
//    }
//    else
//    {
//        exit(EXIT_FAILURE);
//    }
//    //扩展容量
//    //代码1
//    ptr = (int*)realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
//
//    //代码2
//    int* p = NULL;
//    p = realloc(ptr, 1000);
//    if (p != NULL)
//    {
//        ptr = p;
//    }
//    //业务处理
//    free(ptr);
//    return 0;
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

typedef struct Fortest
{
	int i;
	int a[];//柔性数组成员
}A;

int main()
{

	int i = 0;
	A* p = (A*)malloc(sizeof(A) + 100 * sizeof(int));
	if (p == NULL)
	{
		perror("malloc fail");
		return;
	}

	p->i = 100;
	for (i = 0; i < 100; i++)
	{
		p->a[i] = i;
	}
	free(p);

	return 0;
}