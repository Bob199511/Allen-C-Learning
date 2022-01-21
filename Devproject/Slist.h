#pragma once

typedef int SLDdataType;

typedef struct SListNode{
	
	SLDdataType data;
	SListNode* next;//结构体里不能包含结构体，否则套娃；可以有指针 ，只是地址 
}SLTnode;
