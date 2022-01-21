#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"


//显示菜单
void menu(){
	printf("************************************************\n");
	printf("************1.添加            2.删除************\n");
	printf("************3.查找            4.修改************\n");
	printf("************5.显示            6.清空************\n");
	printf("************7.排序            8.销毁************\n");
	printf("************0.退出                  ************\n");
	printf("************************************************\n");
}
//开辟通讯录空间
void create_space(struct contact_size **ppd){
	(*ppd) -> compacity = 3;
	(*ppd) -> contacts = (struct contact*)malloc((*ppd) -> compacity * sizeof(struct contact));

};
//初始化通讯录
void init(struct contact_size *pd){
	memset(pd, 0 ,sizeof(struct contact_size));
	//开辟容量为3的通讯录
	create_space(&pd);
};
//添加联系人
void Add_contact(struct contact_size *pd){
	printf("请输入要添加的联系人姓名：");
	scanf("%s", pd-> contacts[pd->size].name);
	printf("\n");
	printf("请输入要添加的联系人性别：");
	scanf("%s", pd->contacts[pd->size].sex);
	printf("\n");
	printf("请输入要添加的联系人年龄：");
	scanf("%d", &(pd->contacts)[pd->size].age);
	printf("\n");
	printf("请输入要添加的联系人电话：");
	scanf("%s", (pd->contacts)[pd->size].tele);
	printf("\n");
	printf("请输入要添加的联系人地址：");
	scanf("%s", (pd->contacts)[pd->size].addr);
	printf("\n");
	(pd->size)++;
	//如果通讯录满，则扩容增加2个通讯录联系人空间 
	if (pd -> size == pd ->compacity)
	{
		struct contact* temp = NULL;
		temp = (struct contact*)realloc(pd->contacts, pd ->compacity + 2);
		if (temp != NULL)
		{
			pd -> compacity += 2;
			printf("扩容成功！当前容量为%d\n", pd -> compacity);
		} 
		else
			printf("扩容失败！\n");

	}
}

//查找相应姓名的下标
int Find_name(const struct contact_size *ppd){
	int i = 0;
	char name[MAX_name] = "";
	printf("请输入要操作的联系人姓名：");
	scanf("%s", name);
	while (0 != strcmp(name, ppd->contacts[i].name) && i < ppd->size)
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
			(pd->contacts)[i].name, 
			(pd->contacts)[i].sex, 
			(pd->contacts)[i].age, 
			(pd->contacts)[i].tele, 
			(pd->contacts)[i].addr);
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
			pd->contacts[j] = pd->contacts[j + 1];
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
				(pd->contacts)[pos].name, 
				(pd->contacts)[pos].sex, 
				(pd->contacts)[pos].age, 
				(pd->contacts)[pos].tele, 
				(pd->contacts)[pos].addr);

		
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
		scanf("%s", (pd->contacts)[pos].name);
		printf("\n");
		printf("请输入修改后的联系人性别：");
		scanf("%s", pd->contacts[pos].sex);
		printf("\n");
		printf("请输入修改后的联系人年龄：");
		scanf("%d", &(pd->contacts)[pos].age);
		printf("\n");
		printf("请输入修改后的联系人电话：");
		scanf("%s", (pd->contacts)[pos].tele);
		printf("\n");
		printf("请输入修改后的联系人地址：");
		scanf("%s", (pd->contacts)[pos].addr);
	}
}

//对通讯录进行排序
int cmp_name(const void* e1, const void* e2){
	return *(int*)((struct contact*)e1)->name - *(int*)((struct contact*)e2)->name;
}
void Sort_contact(struct contact_size *pd){

	qsort(pd->contacts, pd->size, sizeof(pd->contacts[0]), cmp_name);
	printf("排序完成！\n");
}

//销毁通讯录
void Ruin_contact(struct contact_size *pd){
	free(pd -> contacts);
	pd -> contacts = NULL;
	pd -> compacity = 0;
	pd -> size = 0;
	printf("销毁成功！\n");
	create_space(&pd);//开辟空间，防止后续无添加空间
}