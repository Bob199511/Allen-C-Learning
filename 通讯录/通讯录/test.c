#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

int main(){
	int input = 0;
	struct contact_size cont;
	menu();
	init(&cont);
	do 
	{
		printf("请输入您的选择：       ");
		scanf("%d", &input);
		//输入非数字时会自动跳过此输入语句
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
			printf("已清空通讯录！");
			break;
		case Sort:
			Sort_contact(&cont);
			break;
		case Exit:
			break;
		default:
			printf("输入错误!\n");
			break;
		}

	} while (input);

	return 0;
}