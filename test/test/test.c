#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//���԰汾����������
void print(int (*a)[3]){
	printf("%d\n", *a[1]);
}
int main(){
	int a[2][3] = {0};
	char **p = {"adsa", "dasa"};
	print(a);
	return 0;
}