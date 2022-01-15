#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <memory.h>
//内存拷贝,C语言标准规定memcpy只要处理不重叠的情况就可以了；
//memmove处理重叠内存的拷贝
typedef struct stu{
	char name[30];
	int age;
}stu;
int main(){
	double arr1[] = {1, 2, 3, 4, 5};
	double arr2[5] = { 0 };
	stu arr3[] = {{"张三", 20}, {"李四", 22}};
	stu arr4[3] ={0};
	memcpy(arr2, arr1, sizeof(arr1));
	memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}