#define _CRT_SECURE_NO_WARNINGS
#include "seqlist.h"
void TestSeqlist(){

	SL Seq = {0};//若用指针需要开辟动态空间
	
	SeqlistInit(&Seq);
	
	SeqlistInsert(&Seq, 1, 1);
	//SeqlistPutfront(&Seq, 1);用插入函数替代 
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
	//SeqlistPutback(&Seq, 13);用插入函数替代 
	SeqlistInsert(&Seq, Seq.size + 1, 131);
	
	SeqlistPopfront(&Seq);
	SeqlistPopback(&Seq);

	
	SeqlistInsert(&Seq, 12, 222);
	SeqlistInsert(&Seq, 1, 100);
	SeqlistPrint(&Seq);
	
	SeqlistDelete(&Seq, 1);
	SeqlistDelete(&Seq, Seq.size);
	
	SeqlistFind(&Seq, 1000);
	
	SeqlistPrint(&Seq);
	
	SeqlistDestroy(&Seq);
	
}

int main(){

	menu();
	
	SL Seq = {0};//若用指针需要开辟动态空间
	SeqlistInit(&Seq);
	int choose = 1;
	while(choose){
		int val = 0;
		printf("请输入您的选择： ");
		scanf("%d", &choose);
		switch(choose){
			
			case 1:
				while(scanf("%d", &val) != EOF){//EOF == -1 退出 
					SeqlistPutfront(&Seq, val);
				}
				break;
			//后续类似 
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				SeqlistPrint(&Seq);
				break;
			case Exit:
				SeqlistDestroy(&Seq);
				break;
			defalut:
				printf("输入错误\n");
				break;
		}
	}
	//TestSeqlist();

	return 0;
}
