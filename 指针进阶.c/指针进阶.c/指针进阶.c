#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ADD(int x, int y){

	return x + y;
}
int main(){
	int a = 5, b = 3;
	int (*p)(int, int) = ADD;;//����ָ��,(int x, int y)Ҳ����
	ADD(a, b);
	printf("%p\n",&ADD);//��ӡ�����ĵ�ַ
	printf("%p\n",ADD);//��ӡ�����ĵ�ַ
	printf("%p\n", p);//��ӡ�����ĵ�ַ
	printf("%d\n", (*p)(a, b));//��ӡ�����ĵ�ַ
	return 0;
}