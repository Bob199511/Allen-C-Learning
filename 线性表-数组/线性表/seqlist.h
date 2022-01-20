#define _CRT_SECURE_NO_WARNINGS
#pragma once//防止被重复的包含,与下面等价
//#ifndef _SEQLIST_H_
//#define _SEQLIST_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//写代码切记不要写太多再来测试，最好写完一部分测试一部分
#define MAXSIZE 100//增强程序的可维护性
#define N 10
typedef int SQDataType;//类型一般用typedef定义

typedef struct Seqlist{
	SQDataType a[MAXSIZE];
	int size;
}SL;

//增删查改等接口函数
void SeqlistInit(SL *s1);
void SeqlistPrint(const SL *s1);

void SeqlistPutfront(SL *s1, SQDataType num);
void SeqlistPutback(SL *s1);
void SeqlistPopfront(SL *s1);
void SeqlistPopback(SL *s1);

//#endif