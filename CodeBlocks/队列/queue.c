#include "queue.h"

void QueueInit(que* pq){
    pq->head = NULL;
    pq->rear = NULL;
}

void QueueDestroy(que* pq){

    Qnode* tmp = pq->head;
    while(tmp){

        tmp = pq->head->next;
        free(pq->head);
        pq->head = tmp;

    }
}

void QueuePush(que* pq, QDataType val){

    Qnode* newnode = (Qnode*)malloc(sizeof(Qnode));
    if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
    newnode->val = val;
    newnode->next = NULL;

    if(pq->rear == NULL){

    pq->head = newnode;
    pq->rear = newnode;

    }
    else{

        pq->rear->next = newnode;
        pq->rear = newnode;

    }
}
void QueuePop(que* pq){

    assert(pq->head);

    if(pq->rear == pq->head){
        free(pq->head);
        pq->head = pq->rear = NULL;
    }

    Qnode* tmp = pq->head->next;
    free(pq->head);
    pq->head = tmp;

}

QDataType QueueRead(const que* pq){

    if(Isempty(pq))
        exit(-1);
    else
        return pq->head->val;

}
QDataType QueueBack(const que* pq){
    if(Isempty(pq))
        exit(-1);
    else
        return pq->rear->val;
}

int QueueSize(const que* pq){

    int sum = 0;
    Qnode* tmp = pq->head;
    while(tmp != NULL){

        tmp = tmp->next;
        sum++;
    }

    return sum;
}
bool Isempty(const que* pq){

    if(pq->head == NULL)
        return true;
    else
        return false;

}
