#define _CRT_SECURE_NO_WARNINGS 1


#include <stddef.h>
#include <stdio.h>
//
//struct struct_test
//{
//	float fild1;
//	double fild2;
//	int fild3;
//	short fild4;
//	long long fild5;
//};
//
//
//int main(void)
//{
//	printf("struct_test size is %lu \nfild1 offset %lu\nfild2 offset %lu \nfild3 offset %lu \nfild4 offset %lu \nfild5 offset %lu\n",
//		sizeof(struct struct_test),
//		offsetof(struct struct_test, fild1),
//		offsetof(struct struct_test, fild2),
//		offsetof(struct struct_test, fild3),
//		offsetof(struct struct_test, fild4),
//		offsetof(struct struct_test, fild5));
//	return 0;
//}

#define OFFSETOF(type,member) (int)&(((type*)0)->member)


struct Stu
{
	short age;
	char name[20];
	char tele[20];
};


int main()
{
	printf("%d %d %d\n", OFFSETOF(struct Stu, age), OFFSETOF(struct Stu, name), OFFSETOF(struct Stu, tele));

	return 0;
}