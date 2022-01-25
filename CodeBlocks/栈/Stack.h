#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <error.h>
#include <string.h>
#include <stdbool.h>

typedef int STDataType;

typedef struct{
    STDataType *St;
    int top;
    int capacity;
}ST;

void StackInit(ST* ps);
void StackDestroy(ST* ps);

void StackPush(ST* ps, STDataType val);
void StackPop(ST* ps);
STDataType ReadHead(ST ps);

bool IsEmpty(const ST* ps);
int StackSize(const ST* ps);



#endif // STACK_H_INCLUDED
