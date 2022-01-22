#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef int DataType;

typedef struct SList{
    DataType data;
    struct SList *next;
}*SLhead, SLnode;

void SListPutFront(SLhead* PSL, DataType val);
void SListPutBack(SLhead* PSL, DataType val);
void SListPopFront(SLhead* PSL);
void SListPopBack(SLhead* PSL);

void SListPrint(SLhead PSL);

SLhead SListFind(SLhead PSL, DataType val);//查找数值为val的结点
void SListInsert(SLhead* PSL, SLhead pos, DataType val);
void SListDelete(SLhead* PSL, SLhead pos);
