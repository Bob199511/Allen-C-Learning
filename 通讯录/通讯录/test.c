#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

int main(){
	int input = 0;
	struct contact_size cont;
	menu();
	init(&cont);
	do 
	{
		printf("����������ѡ��       ");
		scanf("%d", &input);
		//���������ʱ���Զ��������������
		switch (input)
		{
		case Add:
			Add_contact(&cont);
			break;
		case Delete:
			Delete_contact(&cont);
			break;
		case Search:
			Search_contact(&cont);
			break;
		case Modify:
			Modify_contanct(&cont);
			break;
		case Show:
			show_contact(&cont);
			break;
		case Clear:
			init(&cont);
			printf("�����ͨѶ¼��");
			break;
		case Sort:
			Sort_contact(&cont);
			break;
		case Exit:
			break;
		default:
			printf("�������!\n");
			break;
		}

	} while (input);

	return 0;
}