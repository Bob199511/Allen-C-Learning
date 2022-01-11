#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ADD(int x, int y){

	return x + y;
}
int main(){
	int a = 5, b = 3;
	int (*p)(int, int) = ADD;;//函数指针,(int x, int y)也可以
	ADD(a, b);
	printf("%p\n",&ADD);//打印函数的地址
	printf("%p\n",ADD);//打印函数的地址
	printf("%p\n", p);//打印函数的地址
	printf("%d\n", (*p)(a, b));//打印函数的地址
	return 0;
}