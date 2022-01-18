#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//测试版本，经常出错
void print(int (*a)[3]){
	printf("%d\n", *a[1]);
}
int main(){
	int a[2][3] = {0};
	char **p = {"adsa", "dasa"};
	print(a);
	return 0;
}