#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<error.h>
#include<stdbool.h>
#include<assert.h>

typedef int QDataType;

typedef struct Qnode{
    QDataType val;
    struct Qnode* next;
}Qnode;

typedef struct que{
    Qnode* head;
    Qnode* rear;
}que;
void QueueInit(que* pq);
void QueueDestroy(que* pq);

void QueuePush(que* pq, QDataType val);
void QueuePop(que* pq);

QDataType QueueRead(const que* pq);
QDataType QueueBack(const que* pq);
int QueueSize(const que* pq);
bool Isempty(const que* pq);


#endif // QUEUE_H_INCLUDED
