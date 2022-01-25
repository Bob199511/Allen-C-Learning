#include "Stack.h"

void StackTest(){
    ST st;
    StackInit(&st);
    StackPush(&st, 1);
    StackPush(&st, 2);
    StackPush(&st, 3);
    printf("%d\n", ReadHead(st));
    printf("Stack size is %d\n", StackSize(&st));
    StackPop(&st);
    printf("%d\n", ReadHead(st));
    printf("Stack size is %d\n", StackSize(&st));
    StackPop(&st);
    StackPop(&st);
    //StackPop(&st);
    StackDestroy(&st);
}

int main()
{
    StackTest();

    return 0;
}
