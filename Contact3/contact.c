#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//初始化通讯录2
void InitContact(Contact* pc)
{
	pc->sz = 0;
	PeoInfo* ptr = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (ptr == NULL)
	{
		perror("InitContact::calloc");
		return;
	}
	pc->data = ptr;
	pc->capacity = DEFAULT_SZ;
	
	//加载通讯录
	LoadContact(pc);
}

//添加联系人2
void check_capacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//增加容量
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			perror("Contact::realloc");
			return;
		}
		pc->data = ptr;
		pc->capacity += INC_SZ;
		printf("Successfully for capacity\n");
	}
}
//释放内存
void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}


void AddContact(Contact* pc)
{
	assert(pc);
	check_capacity(pc);
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
	char name[NAME_MAX] = { 0 };
	scanf("%s", name);
	int ret = Serch_by_name(pc, name);
	if (ret == -1)
	{
		printf("No such persen\n");
		return;
	}
	//删除
	int i = 0;
	for (i = ret; i < pc->sz - 1; i++)
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

//保存通讯录
void SaveContact(Contact* pc)
{
	FILE* pf = fopen("Contact.txt", "wb");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}

	fclose(pf);
	pf = NULL;

	printf("Successfully for save\n");

}

//加载通讯录
void LoadContact(Contact* pc)
{
	FILE* pf = fopen("Contact.txt", "rb");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}
	//读数据
	PeoInfo tmp = { 0 };
	int i = 0;
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		check_capacity(pc);
		pc->data[i] = tmp;
		pc->sz++;
		i++;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}
