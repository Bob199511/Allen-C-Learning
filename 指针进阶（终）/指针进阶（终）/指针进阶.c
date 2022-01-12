#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//冒泡排序
void bubble(int *arr, int sz){
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1;j++ )
		{
			int temp = 0;
			if (arr[j] <  arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
	
}
int cmp_int(const void* e1, const void* e2){
	return *(int*)e1 - *(int*)e2;
}
int main(){
	int arr[5] = {1, 2, 3, 6, 4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i  = 0;
/*	bubble(arr, sz);*/
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//cmp_int没有调用实参
	for (i = 0;i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


//int ADD(int x, int y){};
// int main(){
// 	int arr[10] = {0};
// 	int (*p)[10] = &arr;//[]意味着是数组，取出数组的地址
// 	int (*pfarr)(int, int);//函数指针
// 	int (*pfarr[4])(int, int);//pfarr是一个数组——函数指针的数组
// 	int (*(*ppfarr)[4])(int , int);//ppfarr是一个数组指针（指向函数数组指针的指针）
// 	//指向的数组有四个元素指向的数组中每个元素的类型是一个函数指针int(*)(int, int)
// }

//char* my_strcpy(char* dest, const char* src);
//int main(){
//
//	//char* (*pd)(char* ,const char*) = my_strcpy;//指向my_strcpy的指针,const不能省略
//	//char* (*pf[4])(char* ,const char*) = {my_strcpy};//函数指针数组，能存放4个my_strcpy函数的地址
//	//return 0;
//}