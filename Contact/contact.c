#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//初始化通讯录
void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//添加联系人
void AddContact(Contact* pc)
{
	//判断
	if (pc->sz == MAX)
	{
		printf("Contacts is Full\n");
		return;
	}
	//添加
	printf("Enter Name:>\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("Enter Age:>\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("Enter Sex:>\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("Enter Address:>\n");
	scanf("%s", pc->data[pc->sz].address);
	printf("Enter Tele:>\n");
	scanf("%s", pc->data[pc->sz].tele);

	pc->sz++;
}

//显示个人信息
void ShowContact(const Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("No Infomation\n");
		return;
	}
	printf("%-15s\t%-5s\t%-5s\t%-20s\t%-15s\n", "Name", "Age", "Sex", "Address", "Tele");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-15s\t%-5d\t%-5s\t%-20s\t%-15s\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].address,
			pc->data[i].tele);
	}

}

int Serch_by_name(const Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;

}

//删除个人信息
void DelContact(Contact* pc)
{
	printf("Enter name to delete\n");
	char name[NAME_MAX] = {0};
	scanf("%s", name);
	int ret = Serch_by_name(pc, name);
	if (ret == -1)
	{
		printf("No such persen\n");
		return;
	}
	//删除
	int i = 0;
	for (i = ret; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("Successfully deleted\n");
}


//查找个人信息
void SerchContact(const Contact* pc)
{
	printf("Enter name to serch\n");
	char name[NAME_MAX] = { 0 };
	scanf("%s", name);

	int ret = Serch_by_name(pc, name);
	if (ret == -1)
	{
		printf("No such persen\n");
		return;
	}

	printf("%-15s\t%-5s\t%-5s\t%-20s\t%-15s\n", "Name", "Age", "Sex", "Address", "Tele");

	printf("%-15s\t%-5d\t%-5s\t%-20s\t%-15s\n", pc->data[ret].name,
		pc->data[ret].age,
		pc->data[ret].sex,
		pc->data[ret].address,
		pc->data[ret].tele);
}

//修改个人信息
void ModifyContact(Contact* pc)
{
	printf("Enter name to modify\n");
	char name[NAME_MAX] = { 0 };
	scanf("%s", name);
	int ret = Serch_by_name(pc, name);
	if (ret == -1)
	{
		printf("No such persen\n");
		return;
	}
	printf("Enter Name:>\n");
	scanf("%s", pc->data[ret].name);
	printf("Enter Age:>\n");
	scanf("%d", &(pc->data[ret].age));
	printf("Enter Sex:>\n");
	scanf("%s", pc->data[ret].sex);
	printf("Enter Address:>\n");
	scanf("%s", pc->data[ret].address);
	printf("Enter Tele:>\n");
	scanf("%s", pc->data[ret].tele);
	printf("Successfully modifyed\n");
}

//排序通讯录

//int cmp_Contact(const void* e1, const void* e2)
//{
//	return strcmp(((Contact*)e1)->data->name, ((Contact*)e2)->data->name);
//}
//
//void SortContact(Contact* pc)
//{
//	int sz = sizeof(pc->data)/ sizeof(pc->data[0]);
//	qsort(pc, sz, sizeof(pc->data[0]), cmp_Contact);
//}
