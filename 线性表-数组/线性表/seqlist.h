#define _CRT_SECURE_NO_WARNINGS
#pragma once//��ֹ���ظ��İ���,������ȼ�
//#ifndef _SEQLIST_H_
//#define _SEQLIST_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//д�����мǲ�Ҫд̫���������ԣ����д��һ���ֲ���һ����
#define MAXSIZE 100//��ǿ����Ŀ�ά����
#define N 10
typedef int SQDataType;//����һ����typedef����

typedef struct Seqlist{
	SQDataType a[MAXSIZE];
	int size;
}SL;

//��ɾ��ĵȽӿں���
void SeqlistInit(SL *s1);
void SeqlistPrint(const SL *s1);

void SeqlistPutfront(SL *s1, SQDataType num);
void SeqlistPutback(SL *s1);
void SeqlistPopfront(SL *s1);
void SeqlistPopback(SL *s1);

//#endif