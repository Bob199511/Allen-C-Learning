#include "DList.h"

void DListTest1(){
    LHead DL = NULL;
    DListInit(&DL);

    DListPutFront(&DL, 0);
    DListPutFront(&DL, 1);
    DListPutFront(&DL, 2);
    DListPutBack(&DL, 3);
    DListPutBack(&DL, 4);
    DListPopFront(&DL);
    DListPopFront(&DL);
    DListPopFront(&DL);
    DListPopBack(&DL);
    DListPopBack(&DL);
    DListPopBack(&DL);

    DListPrint(DL);
}

void DListTest2(){
    LHead DL = NULL;
    DListInit(&DL);

    DListPutFront(&DL, 0);
    DListPutFront(&DL, 1);
    DListPutFront(&DL, 2);
    DListPrint(DL);
    DListPutBack(&DL, 3);
    DListPutBack(&DL, 4);
    LNode* pos = DListFind(DL, 1);
    if(pos != NULL){
        DListInsert(&DL, pos, 10);
        DListInsert(&DL, pos, 11);
        DListDelete(&DL, pos);

    }
    else
        printf("Pos is not exist!\n");

    DListPrint(DL);
    int Len = DListSize(DL);
    printf("双端循环队列长度为%d\n", Len);
    DListDestroy(&DL);
}

int main()
{
    DListTest2();
    printf("Hello world!\n");
    return 0;
}
