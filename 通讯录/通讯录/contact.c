#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//��ʾ�˵�
void menu(){
	printf("************************************************\n");
	printf("************1.���            2.ɾ��************\n");
	printf("************3.����            4.�޸�************\n");
	printf("************5.��ʾ            6.���************\n");
	printf("************7.����            0.�˳�************\n");
	printf("************************************************\n");
}
//��ʼ��ͨѶ¼
void init(struct contact_size *pd){
	memset(pd, 0 ,sizeof(struct contact_size));
};
//�����ϵ��
void Add_contact(struct contact_size *pd){
	printf("������Ҫ��ӵ���ϵ��������");
	scanf("%s", (pd->data)[pd->size].name);
	printf("\n");
	printf("������Ҫ��ӵ���ϵ���Ա�");
	scanf("%s", pd->data[pd->size].sex);
	printf("\n");
	printf("������Ҫ��ӵ���ϵ�����䣺");
	scanf("%d", &(pd->data)[pd->size].age);
	printf("\n");
	printf("������Ҫ��ӵ���ϵ�˵绰��");
	scanf("%s", (pd->data)[pd->size].tele);
	printf("\n");
	printf("������Ҫ��ӵ���ϵ�˵�ַ��");
	scanf("%s", (pd->data)[pd->size].addr);
	printf("\n");
	(pd->size)++;
}

//������Ӧ�������±�
int Find_name(const struct contact_size *ppd){
	int i = 0;
	char name[MAX_name] = "";
	printf("������Ҫ��������ϵ��������");
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

//չʾͨѶ¼
void show_contact(const struct contact_size *pd){
	int i = 0;
	printf("%-6s\t%-20s\t%-10s\t%-5s\t%-15s\t%-60s\n", "���", "����", "�Ա�", "����", "�绰����", "��ַ");
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

//ɾ����ϵ��
void Delete_contact(struct contact_size *pd){
	int pos = 0;
	pos = Find_name(pd);
	if (pos == -1)
	{
		printf("Ҫɾ������ϵ�˲����ڣ�\n");
	} 
	else
	{
		int j = 0;
		for (j = pos; j < pd->size - 1; j++)
		{
			pd->data[j] = pd->data[j + 1];
		}
		pd->size--;
		printf("ɾ���ɹ���\n");
	}
}

//������ϵ��
void Search_contact(const struct contact_size *pd){
	int pos = 0;
	pos = Find_name(pd);
	if (pos == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲����ڣ�\n");
	} 
	else
	{
		printf("%-6s\t%-20s\t%-10s\t%-5s\t%-15s\t%-60s\n", 
			"���", "����", "�Ա�", "����", "�绰����", "��ַ");
		printf("%-6d\t%-20s\t%-10s\t%-5d\t%-15s\t%-60s\n",
				pos + 1, 
				(pd->data)[pos].name, 
				(pd->data)[pos].sex, 
				(pd->data)[pos].age, 
				(pd->data)[pos].tele, 
				(pd->data)[pos].addr);

		
	}
}

//�޸���ϵ��
void Modify_contanct(struct contact_size *pd){
	int pos = 0;
	pos = Find_name(pd);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲����ڣ�\n");
	} 
	else
	{
		printf("�������޸ĺ����ϵ��������");
		scanf("%s", (pd->data)[pos].name);
		printf("\n");
		printf("�������޸ĺ����ϵ���Ա�");
		scanf("%s", pd->data[pos].sex);
		printf("\n");
		printf("�������޸ĺ����ϵ�����䣺");
		scanf("%d", &(pd->data)[pos].age);
		printf("\n");
		printf("�������޸ĺ����ϵ�˵绰��");
		scanf("%s", (pd->data)[pos].tele);
		printf("\n");
		printf("�������޸ĺ����ϵ�˵�ַ��");
		scanf("%s", (pd->data)[pos].addr);
	}
}

//��ͨѶ¼��������
int cmp_name(const void* e1, const void* e2){
	return *(int*)((struct contact*)e1)->name - *(int*)((struct contact*)e2)->name;
}
void Sort_contact(struct contact_size *pd){

	qsort(pd->data, pd->size, sizeof(pd->data[0]), cmp_name);
	printf("������ɣ�\n");
}