#define _CRT_SECURE_NO_WARNINGS
#include "seqlist.h"

void TestSeqlist(){

	SL Seq = {0};//����ָ����Ҫ���ٶ�̬�ռ�
	SeqlistInit(&Seq);
	SeqlistPutfront(&Seq, 1);
	SeqlistPutfront(&Seq, 2);
	SeqlistPutfront(&Seq, 3);
	SeqlistPutfront(&Seq, 4);
	SeqlistPutfront(&Seq, 5);
	SeqlistPutfront(&Seq, 6);
	SeqlistPutfront(&Seq, 7);
	SeqlistPutfront(&Seq, 8);
	SeqlistPutfront(&Seq, 9);
	SeqlistPutfront(&Seq, 10);
	SeqlistPutfront(&Seq, 11);
	SeqlistPutfront(&Seq, 12);

	SeqlistPopfront(&Seq);
	SeqlistPrint(&Seq);
}

int main(){
	TestSeqlist();

	return 0;
}