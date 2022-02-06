#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef int SDataType;

typedef struct{
    SDataType *sk;
    int top;
    int capacity;
    int flag;//flag为1，表示此队列出栈，为0表示元素从此队列入
}Mystack;

typedef struct {
    Mystack* s1;
    Mystack* s2;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
    queue->s1 = ( Mystack*)malloc(sizeof( Mystack));
    queue->s2 = ( Mystack*)malloc(sizeof( Mystack));
    queue->s1->capacity = queue->s2->capacity = 4;
    queue->s1->sk = ( SDataType *)malloc(4 * sizeof(SDataType));
    queue->s2->sk = ( SDataType *)malloc(4 * sizeof(SDataType));
    queue->s1->top = -1;
    queue->s2->top = -1;
    queue->s1->flag = 0;//初始时，任意元素可入队
    queue->s2->flag = 0;
    return queue;
}

void IsStackFull(MyQueue* obj){
    SDataType* tmp;
	if(obj->s1->top + 1 == obj->s1->capacity){
            obj->s1->capacity *= 2;
            //开辟空间以字节为单位，注意不要忘记；元素个数*元素大小
            tmp = (SDataType*)realloc(obj->s1->sk, obj->s1->capacity * sizeof(SDataType));
            if(tmp == NULL)
                exit(-1);
            else
				obj->s1->sk = tmp;
        }
    if(obj->s2->top + 1 == obj->s2->capacity){
            obj->s2->capacity *= 2;
            tmp = (SDataType*)realloc(obj->s2->sk, obj->s1->capacity * sizeof(SDataType));
            if(tmp == NULL)
                exit(-1);
            else
				obj->s2->sk = tmp;
        }
}

void myQueuePush(MyQueue* obj, int x) {
    IsStackFull(obj);
    if(obj->s1->flag == 0){
		++(obj->s1->top);
        obj->s1->sk[obj->s1->top] = x;
        obj->s2->flag = 1;
    }
    else{
		++(obj->s2->top);
        obj->s2->sk[obj->s2->top] = x;
        obj->s2->flag = 0;
    }

}

int myQueuePop(MyQueue* obj) {
    SDataType ret = 0;
	if(obj->s2->top == -1){
        while(obj->s1->flag == 0){
        IsStackFull(obj);//防止地质越界
		++(obj->s2->top);
        obj->s2->sk[obj->s2->top] = obj->s1->sk[obj->s1->top];
        obj->s1->top--;
        if(obj->s1->top == -1)
            break;
        }
    }
    else if(obj->s1->top == -1){
        while(obj->s2->flag == 0){
        IsStackFull(obj);//防止地质越界
		++(obj->s1->top);
        obj->s1->sk[obj->s1->top] = obj->s2->sk[obj->s2->top];
        obj->s2->top--;
        if(obj->s2->top == -1)
            break;
        }
    }
    else;
    if(obj->s1->flag == 0){
        ret = obj->s2->sk[obj->s2->top];
        --(obj->s2->top);
    }
    else{
        ret = obj->s1->sk[obj->s1->top];
        --(obj->s1->top);
    }
    return ret;
}

int myQueuePeek(MyQueue* obj) {
    if(obj->s1->flag == 1 && obj->s1->top != -1)//判断临界条件，出栈为空；或者出栈不为空
        return obj->s1->sk[obj->s1->top];
    else if(obj->s2->flag == 1 && obj->s2->top != -1)
        return obj->s2->sk[obj->s2->top];
    else if(obj->s1->top != -1)
        return obj->s1->sk[0];
    else
        return obj->s2->sk[0];
}

bool myQueueEmpty(MyQueue* obj) {
    if(obj->s1->top == -1 && obj->s2->top == -1)
        return true;
    else
        return false;
}

void myQueueFree(MyQueue* obj) {
    free(obj->s1->sk);
    obj->s1->sk = NULL;

    free(obj->s2->sk);
    obj->s2->sk = NULL;

    free(obj->s1);
    obj->s1 = NULL;
    free(obj->s2);
    obj->s2 = NULL;
    free(obj);
    obj = NULL;
}

int main()
{
    MyQueue* que = myQueueCreate();
    myQueuePush(que, 1);
    myQueuePush(que, 2);
    myQueuePush(que, 3);
    myQueuePush(que, 4);
    printf("%d\n", myQueuePop(que));
    myQueuePush(que, 5);
    printf("%d\n", myQueuePop(que));
    printf("%d\n", myQueuePop(que));
    printf("%d\n", myQueuePop(que));
    printf("%d\n", myQueuePop(que));

    printf("Hello world!\n");
    return 0;
}
