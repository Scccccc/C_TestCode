#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//struct tag
//{
//	//....
//	//成员列表
//};

//struct P
//{
//	int n;
//	char ch;
//};

//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	int id;
//	struct P p;
//};
//
//int main()
//{
//	struct Stu s1 = { "William", 21, "male", 386910, {11, 'C'}};
//	printf("%d, %c\n", s1.p.n, s1.p.ch);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	int id;
//};
//
//void Print(struct Stu* s2)
//{
//	printf("%s, %hd, %s, %d\n", (*s2).name, (*s2).age, (*s2).sex, (*s2).id);
//	printf("%s, %hd, %s, %d\n", s2->name, s2->age, s2->sex, s2->id);
//
//}
//
//int main()
//{
//	struct Stu s1 = { "William", 21, "male", 386910};
//	Print(&s1);
//	return 0;
//}

//BC96 有序序列判断

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	int i = 0;
	int flag1 = 1;
	int flag2 = 1;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//判断
	for (i = 0; i < n - 1; i++)
	{
		if (arr[i] >= arr[i + 1])
			;
		else
			flag1 = 0;
	}

	for (i = 0; i < n - 1; i++)
	{
		if (arr[i] <= arr[i + 1])
			;
		else
			flag2 = 0;
	}
	if (flag1 || flag2)
		printf("sorted\n");
	else
		printf("unsorted\n");

	return 0;
}