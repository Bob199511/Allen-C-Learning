#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//显示菜单
void menu(){
	printf("************************************************\n");
	printf("************1.添加            2.删除************\n");
	printf("************3.查找            4.修改************\n");
	printf("************5.显示            6.清空************\n");
	printf("************7.排序            0.退出************\n");
	printf("************************************************\n");
}
//初始化通讯录
void init(struct contact_size *pd){
	memset(pd, 0 ,sizeof(struct contact_size));
};
//添加联系人
void Add_contact(struct contact_size *pd){
	printf("请输入要添加的联系人姓名：");
	scanf("%s", (pd->data)[pd->size].name);
	printf("\n");
	printf("请输入要添加的联系人性别：");
	scanf("%s", pd->data[pd->size].sex);
	printf("\n");
	printf("请输入要添加的联系人年龄：");
	scanf("%d", &(pd->data)[pd->size].age);
	printf("\n");
	printf("请输入要添加的联系人电话：");
	scanf("%s", (pd->data)[pd->size].tele);
	printf("\n");
	printf("请输入要添加的联系人地址：");
	scanf("%s", (pd->data)[pd->size].addr);
	printf("\n");
	(pd->size)++;
}

//查找相应姓名的下标
int Find_name(const struct contact_size *ppd){
	int i = 0;
	char name[MAX_name] = "";
	printf("请输入要操作的联系人姓名：");
	scanf("%s", name);
	while (0 != strcmp(name, ppd->data[i].name) && i < ppd->size)
	{
		i++;
	}
	if (i >= ppd->size)
		return -1;
	else
		return i;
}

//展示通讯录
void show_contact(const struct contact_size *pd){
	int i = 0;
	printf("%-6s\t%-20s\t%-10s\t%-5s\t%-15s\t%-60s\n", "序号", "姓名", "性别", "年龄", "电话号码", "地址");
	for (i = 0; i < pd->size; i++)
	{
		printf("%-6d\t%-20s\t%-10s\t%-5d\t%-15s\t%-60s\n",
			 i + 1, 
			(pd->data)[i].name, 
			(pd->data)[i].sex, 
			(pd->data)[i].age, 
			(pd->data)[i].tele, 
			(pd->data)[i].addr);
	}	
}

//删除联系人
void Delete_contact(struct contact_size *pd){
	int pos = 0;
	pos = Find_name(pd);
	if (pos == -1)
	{
		printf("要删除的联系人不存在！\n");
	} 
	else
	{
		int j = 0;
		for (j = pos; j < pd->size - 1; j++)
		{
			pd->data[j] = pd->data[j + 1];
		}
		pd->size--;
		printf("删除成功！\n");
	}
}

//查找联系人
void Search_contact(const struct contact_size *pd){
	int pos = 0;
	pos = Find_name(pd);
	if (pos == -1)
	{
		printf("要查找的联系人不存在！\n");
	} 
	else
	{
		printf("%-6s\t%-20s\t%-10s\t%-5s\t%-15s\t%-60s\n", 
			"序号", "姓名", "性别", "年龄", "电话号码", "地址");
		printf("%-6d\t%-20s\t%-10s\t%-5d\t%-15s\t%-60s\n",
				pos + 1, 
				(pd->data)[pos].name, 
				(pd->data)[pos].sex, 
				(pd->data)[pos].age, 
				(pd->data)[pos].tele, 
				(pd->data)[pos].addr);

		
	}
}

//修改联系人
void Modify_contanct(struct contact_size *pd){
	int pos = 0;
	pos = Find_name(pd);
	if (pos == -1)
	{
		printf("要修改的联系人不存在！\n");
	} 
	else
	{
		printf("请输入修改后的联系人姓名：");
		scanf("%s", (pd->data)[pos].name);
		printf("\n");
		printf("请输入修改后的联系人性别：");
		scanf("%s", pd->data[pos].sex);
		printf("\n");
		printf("请输入修改后的联系人年龄：");
		scanf("%d", &(pd->data)[pos].age);
		printf("\n");
		printf("请输入修改后的联系人电话：");
		scanf("%s", (pd->data)[pos].tele);
		printf("\n");
		printf("请输入修改后的联系人地址：");
		scanf("%s", (pd->data)[pos].addr);
	}
}

//对通讯录进行排序
int cmp_name(const void* e1, const void* e2){
	return *(int*)((struct contact*)e1)->name - *(int*)((struct contact*)e2)->name;
}
void Sort_contact(struct contact_size *pd){

	qsort(pd->data, pd->size, sizeof(pd->data[0]), cmp_name);
	printf("排序完成！\n");
}