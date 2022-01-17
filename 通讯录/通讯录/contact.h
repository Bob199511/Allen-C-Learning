#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_name 20
#define MAX_sex 10
#define MAX_tele 11
#define MAX_addr 60
#define MAX_contact 1000

//显示菜单
void menu();
enum{
	Exit,
	Add,
	Delete,
	Search,
	Modify,
	Show,
	Clear,
	Sort
};
//通讯录结构体
struct contact 
{
	char name[MAX_name];
	char sex[MAX_sex];
	int age;
	char tele[MAX_tele];
	char addr[MAX_addr];
};
struct contact_size 
{
	struct contact data[MAX_contact];
	int size;
};
//初始化通讯录
void init(struct contact_size *pd);
//添加联系人
void Add_contact(struct contact_size *pd);
//展示通讯录
void show_contact(const struct contact_size *pd);
//删除联系人
void Delete_contact(struct contact_size *pd);
//查找联系人
void Search_contact(const struct contact_size *pd);
//修改联系人
void Modify_contanct(struct contact_size *pd);
//对通讯录进行排序
void Sort_contact(struct contact_size *pd);