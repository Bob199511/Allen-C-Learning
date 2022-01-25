#include "Stack.h"


void StackInit(ST* ps){
    ps->top = -1;
    ps->capacity = 4;
    ps->St = (STDataType*)malloc(ps->capacity*sizeof(STDataType));
}
void StackDestroy(ST* ps){
    free(ps->St);
    ps->St = NULL;
    ps->top = -1;
}

void StackPush(ST* ps, STDataType val){
    if(ps->top + 1 == ps->capacity){
        STDataType* tmp = NULL;
        ps->capacity *= 2;
        tmp = (STDataType*)realloc(ps->St,ps->capacity*sizeof(STDataType));
        if(tmp != NULL)
            ps->St = tmp;
        else//应该需要销毁栈
            exit(-1);
    }
    ps->St[++ps->top] = val;
}
void StackPop(ST* ps){
    //strerror(ps->St);
    if(ps->top == -1)
        exit(-1);
    else
        ps->top--;
}


STDataType ReadHead(ST ps){
    strerror(ps.St);
    return ps.St[ps.top];
}

bool IsEmpty(const ST* ps){
    if(ps->top == -1)
        return true;
    else
        return false;
}
int StackSize(const ST* ps){
    return ps->top + 1;
}
