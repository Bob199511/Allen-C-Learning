#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct newnode{
    int val;
    struct newnode* next;
};
typedef struct queue{
    struct newnode* front;
    struct newnode* rear;
}queue;

typedef struct {
    queue* q1;
    queue* q2;
} MyStack;


MyStack* myStackCreate() {
    MyStack* St = (MyStack*)malloc(sizeof(MyStack));
    St->q1 = (queue*)malloc(sizeof(queue));
    St->q2 = (queue*)malloc(sizeof(queue));
    St->q1->front = NULL;
    St->q2->front = NULL;
    St->q1->rear = NULL;
    St->q2->rear = NULL;
    return St;
}

void myStackPush(MyStack* obj, int x) {
    struct newnode* tmp = (struct newnode*)malloc(sizeof(struct newnode));
    tmp->val = x;
    tmp->next = NULL;
    if(obj->q1->front != NULL){
        obj->q1->rear->next = tmp;
        obj->q1->rear = tmp;
    }
    else if(obj->q2->front != NULL){
        obj->q2->rear->next = tmp;
        obj->q2->rear = tmp;
    }
    else{
        obj->q1->front = obj->q1->rear = tmp;
    }

}

int myStackPop(MyStack* obj) {
    if(obj->q1->front == NULL && obj->q2->front == NULL)
        exit(-1);
    if(obj->q1->front == NULL){
        while(obj->q2->front != obj->q2->rear){
            if(obj->q1->front == NULL)
                obj->q1->front = obj->q1->rear = obj->q2->front;
            else{
                obj->q1->rear->next = obj->q2->front;
                obj->q1->rear = obj->q2->front;
            }

            obj->q2->front = obj->q2->front->next;
        }
        if(obj->q1->front == NULL);//判断是否为空队列
        else
            obj->q1->rear->next = NULL;//q1尾指针指向空
        int ret = obj->q2->front->val;
        free(obj->q2->front);
        obj->q2->front = obj->q2->rear = NULL;
        return ret;
    }
    else{
        while(obj->q1->front != obj->q1->rear){
            if(obj->q2->front == NULL)
                obj->q2->front = obj->q2->rear = obj->q1->front;
            else{
                obj->q2->rear->next = obj->q1->front;
                obj->q2->rear = obj->q1->front;
            }

            obj->q1->front = obj->q1->front->next;
        }
        if(obj->q2->front == NULL);
        else
            obj->q2->rear->next = NULL;//q2尾指针指向空
        int ret = obj->q1->front->val;
        free(obj->q1->front);
        obj->q1->front = obj->q1->rear = NULL;
        return ret;
    }

}

int myStackTop(MyStack* obj) {
    if(obj->q1->front != NULL)
        return obj->q1->rear->val;
    else
        return obj->q2->rear->val;
}

bool myStackEmpty(MyStack* obj) {
    if(obj->q1->front == NULL && obj->q2->front == NULL)
        return true;
    else
        return false;
}

void myStackFree(MyStack* obj) {
    struct newnode* tmp;
    if(obj->q1->front != NULL){
        while(obj->q1->front != NULL){
            tmp = obj->q1->front->next;
            free(obj->q1->front);
            obj->q1->front = tmp;
        }
        obj->q1->front = obj->q1->rear = NULL;
    }
    else{
        while(obj->q2->front != NULL){
            tmp = obj->q2->front->next;
            free(obj->q2->front);
            obj->q2->front = tmp;
        }
        obj->q2->front = obj->q2->rear = NULL;
    }
}

int main()
{
    MyStack* sk = myStackCreate();
    myStackPush(sk, 1);
    myStackPush(sk, 2);
    myStackPush(sk, 3);
    printf("%d\n", myStackPop(sk));
    printf("%d\n", myStackPop(sk));
    printf("%d\n", myStackPop(sk));
    myStackEmpty(sk);

    printf("Hello world!\n");
    return 0;
}
