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
//int count = 0;
void PrevOrder(const struct Btree* pb, int* p){
    if(pb == NULL){
    	printf("NULL ");
        return;
		}
    //count++;
    (*p)++;
    printf("%c ", pb->data);
    PrevOrder(pb->left, p);
    PrevOrder(pb->right, p);
}
void __PrevOrder(const struct Btree* pb){

}


void MidOrder(const struct Btree* pb){
    if(pb == NULL){
    	printf("NULL ");
        return;
		}

    MidOrder(pb->left);
    printf("%c ", pb->data);
    MidOrder(pb->right);
}
void PostOrder(const struct Btree* pb){
    if(pb == NULL){
    	printf("NULL ");
        return;
		}

    PostOrder(pb->left);
    PostOrder(pb->right);
    printf("%c ", pb->data);
}

int TreeNodeCount(const struct Btree* pb){

    return pb->left == NULL && pb->right == NULL? 1 : TreeNodeCount(pb->left) + TreeNodeCount(pb->right) + 1;
}

int LeafCount(const struct Btree* pb){

     //return pb->left == NULL && pb->right == NULL? 1 : LeafCount(pb->left) + LeafCount(pb->right);
     if(pb->left == NULL && pb->right == NULL)
        return 1;
     else
        return LeafCount(pb->left) + LeafCount(pb->right);
}

int main()
{
    struct Btree* Broot = BtreeCreate();
    int TreeCount = TreeNodeCount(Broot);
    int p = 0;
    PrevOrder(Broot, &p);
    printf("\n");
    MidOrder(Broot);
    printf("\n");
    PostOrder(Broot);
    printf("\n");
    printf("%d\n", p);
    printf("%d\n", TreeCount);
    printf("LeafNode is %d\n", LeafCount(Broot));

    return 0;
}
