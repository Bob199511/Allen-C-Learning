#ifndef DLIST_H_INCLUDED
#define DLIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef int DListData;

typedef struct DList{

    DListData data;
    struct DList* next;
    struct DList* prev;
}*LHead, LNode;

void DListInit(LHead* PDL);
void DListPrint(LHead PDL);

void DListPutFront(LHead* PDL, DListData val);
void DListPutBack(LHead* PDL, DListData val);
void DListPopFront(LHead* PDL);
void DListPopBack(LHead* PDL);

LNode* DListFind(LHead PDL, DListData val);
void DListInsert(LHead* PDL, LNode* pos, DListData val);
void DListDelete(LHead* PDL, LNode* pos);

int DListSize(LHead PDL);
void DListDestroy(LHead* PDL);

#endif // DLIST_H_INCLUDED
