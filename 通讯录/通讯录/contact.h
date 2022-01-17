#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_name 20
#define MAX_sex 10
#define MAX_tele 11
#define MAX_addr 60
#define MAX_contact 1000

//��ʾ�˵�
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
//ͨѶ¼�ṹ��
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
//��ʼ��ͨѶ¼
void init(struct contact_size *pd);
//�����ϵ��
void Add_contact(struct contact_size *pd);
//չʾͨѶ¼
void show_contact(const struct contact_size *pd);
//ɾ����ϵ��
void Delete_contact(struct contact_size *pd);
//������ϵ��
void Search_contact(const struct contact_size *pd);
//�޸���ϵ��
void Modify_contanct(struct contact_size *pd);
//��ͨѶ¼��������
void Sort_contact(struct contact_size *pd);