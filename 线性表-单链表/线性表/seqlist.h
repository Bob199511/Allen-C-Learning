#define _CRT_SECURE_NO_WARNINGS
#pragma once//��ֹ���ظ��İ���,������ȼ�
//#ifndef _SEQLIST_H_
//#define _SEQLIST_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
//д�����мǲ�Ҫд̫���������ԣ����д��һ���ֲ���һ����
typedef int SQDataType;//����һ����typedef����
//������̬��չ�ռ�
typedef struct Seqlist{
	SQDataType *Slist;
	int size;
	int capacity;
}SL;

enum choose{
	Exit,
	Putfront,
	Putback
	//����������ˣ�ע��enum������ 
};

void menu();
//��ɾ��ĵȽӿں���
void SeqlistInit(SL *s1);
void SeqlistPrint(const SL *s1);
int SeqlistFind(const SL *s1, SQDataType val);

void SeqlistPutfront(SL *s1, SQDataType num);
void SeqlistPutback(SL *s1, SQDataType num);
void SeqlistPopfront(SL *s1);
void SeqlistPopback(SL *s1);
void SeqlistInsert(SL *s1, int pos, SQDataType val);
void SeqlistDelete(SL *s1, int pos);


void SeqlistDestroy(SL *s1);

//#endif
