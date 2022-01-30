#include <stdio.h>
#include <stdlib.h>
#include <string.h>          

typedef char BtreeDataType;

typedef struct Btree{
    struct Btree* left;
    struct Btree* right;
    BtreeDataType data;
}Bnode;

struct Btree* BtreeCreate(){
    struct Btree* pb = (Bnode*)malloc(sizeof(Bnode));
    pb->data = 'A';
    Bnode* b = (Bnode*)malloc(sizeof(Bnode));
    b->data = 'B';
    Bnode* c = (Bnode*)malloc(sizeof(Bnode));
    c->data = 'C';
    Bnode* d = (Bnode*)malloc(sizeof(Bnode));
    d->data = 'D';
    Bnode* e = (Bnode*)malloc(sizeof(Bnode));
    e->data = 'E';
    Bnode* f = (Bnode*)malloc(sizeof(Bnode));
    f->data = 'F';
    Bnode* g = (Bnode*)malloc(sizeof(Bnode));
    g->data = 'G';
    pb->left = b;
    pb->right = c;
    b->left = d;
    b->right = e;
    d->left = f;
    d->right = g;
    c->left = c->right = e->left = e->right = f->left = f->right = g->left = g->right = NULL;
    return pb;
}

void PrevOrder(const struct Btree* pb){
    if(pb == NULL){ 
    	printf("NULL ");
        return;
		} 
    printf("%c ", pb->data);
    PrevOrder(pb->left);
    PrevOrder(pb->right);

}

int main()
{
    struct Btree* Broot = BtreeCreate();

    PrevOrder(Broot);
    printf("Hello world!\n");
    return 0;
}
