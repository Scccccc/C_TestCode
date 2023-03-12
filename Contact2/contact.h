#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDRESS_MAX 30
#define TELE_MAX 15

#define DEFAULT_SZ 3
#define INC_SZ 2


typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char address[ADDRESS_MAX];
	char tele[TELE_MAX];

}PeoInfo;

typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;

}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//释放内存
void DestroyContact(Contact* pc);


//添加个人信息
void AddContact(Contact* pc);

//显示个人信息
void ShowContact(const Contact* pc);

//删除个人信息
void DelContact(Contact* pc);

//查找个人信息
void SerchContact(const Contact* pc);

//修改个人信息
void ModifyContact(Contact* pc);

//排序通讯录
//void SortContact(Contact* pc);