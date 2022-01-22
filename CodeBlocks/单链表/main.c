#include "SList.h"

void SListTest(){

    SLhead SL = (SLhead)malloc(sizeof(SLnode));
    SL->next = NULL;
    SL->data = 0;
    SListPutFront(&SL, 1);
    SListPutBack(&SL, 100);

    SListPrint(SL);
   // SListPopFront(&SL);
    //SListPopFront(&SL);
    //SListPopBack(&SL);
    //SListPopBack(&SL);
    //SListPopBack(&SL);
    SLhead pos = SListFind(SL, 0);
    SListInsert(&SL, pos, 5);
    SListInsert(&SL, pos, 9);
    SListInsert(&SL, pos, 8);
    SListPrint(SL);
    SListDelete(&SL, pos);
    SListDelete(&SL, pos);
    pos = SListFind(SL, 1000);
    if(pos)
        SListInsert(&SL, pos, -1);
    else
        printf("Pos is not found!\n");

    SListPrint(SL);
}

int main()
{
    SListTest();

    return 0;
}
