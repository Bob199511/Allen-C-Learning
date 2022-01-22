#include "SList.h"

SLhead SLBuildnode(DataType x)
{//创建一个值为x的新结点
    SLhead newnode = (SLnode*)malloc(sizeof(SLnode));
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

void SListPutFront(SLhead* PSL, DataType val){

    SLhead newnode = (SLnode*)malloc(sizeof(SLnode));
    newnode->data = val;
    newnode->next = *PSL;
    *PSL = newnode;
    /*SLhead newnode = (SLnode*)malloc(sizeof(SLnode));
    newnode->data = val;
    newnode->next = (*PSL)->next;
    (*PSL)->next = newnode;*///带头结点的
}
void SListPutBack(SLhead* PSL, DataType val)
{

    SLhead newnode = SLBuildnode(val);
    if(*PSL == NULL){
        *PSL = newnode;
        return;
    }
    SLhead temp = *PSL;
    while((temp)->next != NULL)
    {
        temp = temp->next;
    }
    (temp)->next = newnode;
    newnode -> next = NULL;
}
void SListPopFront(SLhead* PSL){
/**<if(*PSL != NULL){
        SLhead p = *PSL;
        *PSL = (*PSL)->next;
        free(p);
    }
    else
        printf("SList is empty!\n");  */
    SLhead p = (*PSL)->next;
    free(*PSL);
    *PSL = p;
}
void SListPopBack(SLhead* PSL){
    if(*PSL == NULL){
        printf("SList is empty!\n");
        return;
    }

    if((*PSL)->next != NULL){
        SLhead p = NULL;
        SLhead q = *PSL;
        while(q->next != NULL){
            p = q;//tail,prev
            q = q ->next;
        }
        p->next = NULL;
        free(q);
    }
    else{
        free(*PSL);
        *PSL = NULL;
    }
}
SLhead SListFind(SLhead PSL, DataType val){
    while(PSL != NULL && PSL->data != val)
        PSL = PSL->next;
    return PSL;
}
void SListInsert(SLhead* PSL, SLhead pos, DataType val){
    if(pos == *PSL){
        SLhead newnode = SLBuildnode(val);
        newnode->next = *PSL;
        *PSL = newnode;
    }
    else{
        SLhead p = *PSL;
        SLhead newnode = SLBuildnode(val);
        while(p->next != pos){
            p = p->next;
        }
        p->next = newnode;
        newnode->next = pos;
    }

}
void SListDelete(SLhead* PSL, SLhead pos){
    SLhead p = *PSL;
    while(p->next != pos && p->next != NULL){
            p = p->next;
        }
    if(p->next != NULL)
        p->next = pos->next;
    else
        printf("Pos is not exist!\n");
}


void SListPrint(SLhead PSL)
{
    SLhead temp = PSL;
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
