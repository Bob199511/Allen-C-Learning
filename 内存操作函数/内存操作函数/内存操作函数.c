#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <memory.h>
//�ڴ濽��,C���Ա�׼�涨memcpyֻҪ�����ص�������Ϳ����ˣ�
//memmove�����ص��ڴ�Ŀ���
typedef struct stu{
	char name[30];
	int age;
}stu;
int main(){
	double arr1[] = {1, 2, 3, 4, 5};
	double arr2[5] = { 0 };
	stu arr3[] = {{"����", 20}, {"����", 22}};
	stu arr4[3] ={0};
	memcpy(arr2, arr1, sizeof(arr1));
	memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}