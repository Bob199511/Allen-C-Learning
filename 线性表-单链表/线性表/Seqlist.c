#define _CRT_SECURE_NO_WARNINGS
#include "seqlist.h"

void menu(){
	printf("***********************************************\n");
	printf("******1.ͷ��                       2.β��    **\n");
	printf("******3.ͷɾ                       4.βɾ    **\n");
	printf("******5.ѡ�����                   6.ѡ��ɾ��**\n");
	printf("******7.����Ԫ��                   8.��ӡԪ��**\n");
	printf("******0.�˳�                       ************\n\n");
}

//��ɾ��ĵȽӿں���
void Isempty(SL **Ps1){
	if ((*Ps1)->capacity == (*Ps1)->size)
	{
		SQDataType *tmp = NULL;
		(*Ps1)->capacity = (*Ps1)->capacity == 0? 4:2 * (*Ps1)->capacity;
		tmp = (SQDataType *)realloc((*Ps1)->Slist, (*Ps1)->capacity * sizeof(SQDataType));
		if (NULL != tmp)
			(*Ps1)->Slist = tmp;
		else{
			printf("Realloc is fault!\n");
			exit(-1);
		}
	}
} 

void SeqlistInit(SL *s1){
	
	s1 ->size = 0;
	s1 ->capacity = 0;
	s1 ->Slist = NULL;
}
void SeqlistPrint(const SL *s1){
	int i = 0;
	for (i = 0; i < s1 -> size; i++)
	{
		printf("%d ", s1->Slist[i]);
	}
	printf("\n");
}
int SeqlistFind(const SL *s1, SQDataType val){
	for(int i = 0; i < s1->size; i++)
		if(val == s1->Slist[i])
			return i;
	printf("Val(%d) is not find!\n", val);
	return -1;
}

void SeqlistPutfront(SL *s1, SQDataType num){
	int i = s1->size;
	//�жϿ��ٵĶ�̬�ռ��Ƿ�����������SeqlistPutback��ʹ�ã�������װ�ɺ���
	Isempty(&s1);
	for (; i > 0; i--)
	{
		s1->Slist[i] = s1->Slist[i - 1];
	}
	s1->Slist[0] = num;
	++s1->size;
}
void SeqlistPutback(SL *s1, SQDataType num){
	Isempty(&s1);
	s1->Slist[s1->size] = num;
	++s1->size;
}
void SeqlistPopfront(SL *s1){
	int i = 0;
	for (i = 0; i < s1->size - 1; i++)
	{
		s1->Slist[i] = s1->Slist[i + 1];
	}
	--s1->size;
}
void SeqlistPopback(SL *s1){
	--s1->size;
}
void SeqlistInsert(SL *s1, int pos, SQDataType val){
	Isempty(&s1);
	assert(pos <= s1->size + 1);
	if(pos > 0){
		int i = s1->size;
		for(; i >= pos; i --)
			s1->Slist[i] = s1->Slist[i - 1];
		s1->Slist[pos - 1] = val;
		++s1->size;
	}
	else
		printf("Insert is fault!\n");	
}
void SeqlistDelete(SL *s1, int pos){
	assert(pos > 0 && pos <= s1->size);
	for(; pos < s1->size; pos++) 
		s1->Slist[pos - 1] = s1->Slist[pos];
	--s1->size;
}

void SeqlistDestroy(SL *s1){
	//�ͷŶ�̬�ռ�
	free(s1->Slist);
	s1->Slist = NULL;
}
