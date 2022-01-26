#include "queue.h"


void Test(){

    que Q;

    QueueInit(&Q);
    QueuePush(&Q, 1);
    QueuePush(&Q, 2);
    QueuePush(&Q, 3);
    printf("QueueHead is %d\n", QueueRead(&Q));
    QueuePop(&Q);
    printf("QueueHead is %d\n", QueueRead(&Q));
    printf("QueueBack is %d\n", QueueBack(&Q));

    printf("QueueSize is %d\n", QueueSize(&Q));

    QueueDestroy(&Q);

}

int main()
{
    Test();
    printf("Hello world!\n");
    return 0;
}
