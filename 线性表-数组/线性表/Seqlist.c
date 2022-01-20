#define _CRT_SECURE_NO_WARNINGS
#include "seqlist.h"

//增删查改等接口函数

void SeqlistInit(SL *s1){
	int i = 0;
	s1 ->size = 0;
	for (i = 0; i < MAXSIZE; i++)
		(s1 ->a)[i] = 0;
}
void SeqlistPrint(const SL *s1){
	int i = 0;
	for (i = 0; i < s1 -> size; i++)
	{
		printf("%d ", s1->a[i]);
	}
}

void SeqlistPutfront(SL *s1, SQDataType num){
	s1->a[s1->size] = num;
	++s1->size;
	if (s1->size == MAXSIZE)
	{
		printf("Seqlist is full!\n");
		exit(0);
	}
}
void SeqlistPutback(SL *s1);
void SeqlistPopfront(SL *s1){
	int i = 0;
	for (i = 0; i < s1->size - 1; i++)
	{
		s1->a[i] = s1->a[i + 1];
	}
	--s1->size;
}
void SeqlistPopback(SL *s1);