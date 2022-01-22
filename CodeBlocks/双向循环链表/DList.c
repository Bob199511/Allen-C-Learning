#include "DList.h"

LNode* DListBuyNode(DListData val){
    LNode* newnode = (LNode*)malloc(sizeof(LNode));
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = val;
    return newnode;
}

void DListInit(LHead* PDL){

    *PDL = DListBuyNode(0);
    (*PDL)->next = *PDL;
    (*PDL)->prev = *PDL;
}

void DListPrint(LHead PDL){

    LNode* tmp = PDL->next;
    while(tmp != PDL){
        printf("%d  ", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

void DListPutFront(LHead* PDL, DListData val){

    LNode* newnode = DListBuyNode(val);
    newnode->next = (*PDL)->next;
    newnode->prev = *PDL;
    (*PDL)->next = newnode;
    newnode->next->prev = newnode;

}
void DListPutBack(LHead* PDL, DListData val){

    LNode* newnode = DListBuyNode(val);
    newnode->prev = (*PDL)->prev;
    newnode->prev->next = newnode;
    newnode->next = (*PDL);
    (*PDL)->prev = newnode;

}
//注意和上课内容比对
void DListPopFront(LHead* PDL){
    if((*PDL)->next == *PDL){//链表为空时，退出
        printf("DList is empty!\n");
        return;
    }

    LNode* tmp = (*PDL)->next;
    (*PDL)->next = tmp->next;
    tmp->next->prev = (*PDL);
    free(tmp);

}

void DListPopBack(LHead* PDL){
    if((*PDL)->next == *PDL){//链表为空时，退出
        printf("DList is empty!\n");
        return;
    }
    else{

    LNode* tmp = (*PDL)->prev;
    (*PDL)->prev = tmp->prev;
    tmp->prev->next = (*PDL);
    free(tmp);
    }
}

LNode* DListFind(LHead PDL, DListData val){
    LNode* tmp = PDL->next;
    while(tmp->data != val && tmp->next != PDL)
        tmp = tmp->next;
    if(tmp->next != PDL)
        return tmp;
    else
        return NULL;
}

void DListInsert(LHead* PDL, LNode* pos, DListData val){
    LNode* newnode = DListBuyNode(val);
    LNode* prev = pos->prev;

    prev->next = newnode;
    newnode->prev = prev;
    newnode->next = pos;
    pos->prev = newnode;

}
void DListDelete(LHead* PDL, LNode* pos){

    pos->prev->next = pos->next;
    pos->next->prev = pos->prev;
    free(pos);
}
int DListSize(LHead PDL){
    int i = 0;
    LNode* tmp = PDL;
    for(i = 0; tmp->next != PDL; i++)
        tmp = tmp->next;
    return i;
}
void DListDestroy(LHead* PDL){
    LNode* tmp1 = (*PDL)->next;
    LNode* tmp2 = tmp1->next;
    while(tmp1 != *PDL ){
        free(tmp1);
        tmp1 = tmp2;
        tmp2 = tmp2->next;
    }
    free(*PDL);
    *PDL = NULL;
    printf("The dList has been destroied!\n");
}



