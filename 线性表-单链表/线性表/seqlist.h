#define _CRT_SECURE_NO_WARNINGS
#pragma once//防止被重复的包含,与下面等价
//#ifndef _SEQLIST_H_
//#define _SEQLIST_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
//写代码切记不要写太多再来测试，最好写完一部分测试一部分
typedef int SQDataType;//类型一般用typedef定义
//链表，动态拓展空间
typedef struct Seqlist{
	SQDataType *Slist;
	int size;
	int capacity;
}SL;

enum choose{
	Exit,
	Putfront,
	Putback
	//后续不添加了，注意enum的运用 
};

void menu();
//增删查改等接口函数
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
