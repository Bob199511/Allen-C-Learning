#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"


//��ʾ�˵�
void menu(){
	printf("************************************************\n");
	printf("************1.���            2.ɾ��************\n");
	printf("************3.����            4.�޸�************\n");
	printf("************5.��ʾ            6.���************\n");
	printf("************7.����            8.����************\n");
	printf("************0.�˳�                  ************\n");
	printf("************************************************\n");
}
//����ͨѶ¼�ռ�
void create_space(struct contact_size **ppd){
	(*ppd) -> compacity = 3;
	(*ppd) -> contacts = (struct contact*)malloc((*ppd) -> compacity * sizeof(struct contact));

};
//��ʼ��ͨѶ¼
void init(struct contact_size *pd){
	memset(pd, 0 ,sizeof(struct contact_size));
	//��������Ϊ3��ͨѶ¼
	create_space(&pd);
};
//�����ϵ��
void Add_contact(struct contact_size *pd){
	printf("������Ҫ��ӵ���ϵ��������");
	scanf("%s", pd-> contacts[pd->size].name);
	printf("\n");
	printf("������Ҫ��ӵ���ϵ���Ա�");
	scanf("%s", pd->contacts[pd->size].sex);
	printf("\n");
	printf("������Ҫ��ӵ���ϵ�����䣺");
	scanf("%d", &(pd->contacts)[pd->size].age);
	printf("\n");
	printf("������Ҫ��ӵ���ϵ�˵绰��");
	scanf("%s", (pd->contacts)[pd->size].tele);
	printf("\n");
	printf("������Ҫ��ӵ���ϵ�˵�ַ��");
	scanf("%s", (pd->contacts)[pd->size].addr);
	printf("\n");
	(pd->size)++;
	//���ͨѶ¼��������������2��ͨѶ¼��ϵ�˿ռ� 
	if (pd -> size == pd ->compacity)
	{
		struct contact* temp = NULL;
		temp = (struct contact*)realloc(pd->contacts, pd ->compacity + 2);
		if (temp != NULL)
		{
			pd -> compacity += 2;
			printf("���ݳɹ�����ǰ����Ϊ%d\n", pd -> compacity);
		} 
		else
			printf("����ʧ�ܣ�\n");

	}
}

//������Ӧ�������±�
int Find_name(const struct contact_size *ppd){
	int i = 0;
	char name[MAX_name] = "";
	printf("������Ҫ��������ϵ��������");
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

//չʾͨѶ¼
void show_contact(const struct contact_size *pd){
	int i = 0;
	printf("%-6s\t%-20s\t%-10s\t%-5s\t%-15s\t%-60s\n", "���", "����", "�Ա�", "����", "�绰����", "��ַ");
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
			pd->contacts[j] = pd->contacts[j + 1];
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
				(pd->contacts)[pos].name, 
				(pd->contacts)[pos].sex, 
				(pd->contacts)[pos].age, 
				(pd->contacts)[pos].tele, 
				(pd->contacts)[pos].addr);

		
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
		scanf("%s", (pd->contacts)[pos].name);
		printf("\n");
		printf("�������޸ĺ����ϵ���Ա�");
		scanf("%s", pd->contacts[pos].sex);
		printf("\n");
		printf("�������޸ĺ����ϵ�����䣺");
		scanf("%d", &(pd->contacts)[pos].age);
		printf("\n");
		printf("�������޸ĺ����ϵ�˵绰��");
		scanf("%s", (pd->contacts)[pos].tele);
		printf("\n");
		printf("�������޸ĺ����ϵ�˵�ַ��");
		scanf("%s", (pd->contacts)[pos].addr);
	}
}

//��ͨѶ¼��������
int cmp_name(const void* e1, const void* e2){
	return *(int*)((struct contact*)e1)->name - *(int*)((struct contact*)e2)->name;
}
void Sort_contact(struct contact_size *pd){

	qsort(pd->contacts, pd->size, sizeof(pd->contacts[0]), cmp_name);
	printf("������ɣ�\n");
}

//����ͨѶ¼
void Ruin_contact(struct contact_size *pd){
	free(pd -> contacts);
	pd -> contacts = NULL;
	pd -> compacity = 0;
	pd -> size = 0;
	printf("���ٳɹ���\n");
	create_space(&pd);//���ٿռ䣬��ֹ��������ӿռ�
}