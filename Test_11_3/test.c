#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

////定义一个学生类型
//struct Stu
//{
//    char name[20];
//    char sex[5];
//    int age;
//};
//
//void Print(struct Stu* ps)
//{
//    //printf("%s %s %d\n", (*ps).name, (*ps).sex, (*ps).age);
//    //->
//    //结构体的指针->成员名
//    printf("%s %s %d\n", ps->name, ps->sex, ps->age);
//}
//
//int main()
//{
//    struct Stu s = {"zhangsan", "男", 20};
//    struct Stu s2 = { "如花", "女", 18 };
//
//    Print(&s);
//    
//    //结构体变量.成员名
//    //printf("%s\n", s2.name);
//    //printf("%s\n", s2.sex);
//    //printf("%d\n", s2.age);
//
//    return 0;
//}



//
//struct Stu
//{
//    char name[20];//名字
//    char sex[5];//年龄
//    int age;//性别
//};
//
//int main()
//{
//    struct Stu s = { "William", "男", 20 };
//    struct Stu* ps = &s;
//    printf("name = %s age = %d sex = %s\n", ps->name, ps->age, ps->sex);
//
//    return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int rec = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		rec = a;
//		a = b;
//		b = rec;
//	}
//	if (a < c)
//	{
//		rec = a;
//		a = c;
//		c = rec;
//	}
//	if (b < c)
//	{
//		rec = b;
//		b = c;
//		c = rec;
//	}
//	printf("%d %d %d\n", a, b, c);
//	
//
//	return 0;
//}

//
//int main()
//{
//	int m = 0;
//	int i = 0;
//	for (m = 100; m <= 200; m++)
//	{
//		for (i = 2; i < m; i++)
//		{
//			if (m % i == 0)
//			{
//				break;
//			}
//		}
//		if (m == i)
//		{
//			printf("%d ", m);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 ==0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	while ((a - b) != 0)
//	{
//		if (a > b)
//		{
//			a -= b;
//		}
//		else
//			b -= a;
//	}
//	printf("%d\n", a);
//	return 0;
//}