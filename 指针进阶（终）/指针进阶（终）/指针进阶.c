#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//ð������
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
	//cmp_intû�е���ʵ��
	for (i = 0;i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


//int ADD(int x, int y){};
// int main(){
// 	int arr[10] = {0};
// 	int (*p)[10] = &arr;//[]��ζ�������飬ȡ������ĵ�ַ
// 	int (*pfarr)(int, int);//����ָ��
// 	int (*pfarr[4])(int, int);//pfarr��һ�����顪������ָ�������
// 	int (*(*ppfarr)[4])(int , int);//ppfarr��һ������ָ�루ָ��������ָ���ָ�룩
// 	//ָ����������ĸ�Ԫ��ָ���������ÿ��Ԫ�ص�������һ������ָ��int(*)(int, int)
// }

//char* my_strcpy(char* dest, const char* src);
//int main(){
//
//	//char* (*pd)(char* ,const char*) = my_strcpy;//ָ��my_strcpy��ָ��,const����ʡ��
//	//char* (*pf[4])(char* ,const char*) = {my_strcpy};//����ָ�����飬�ܴ��4��my_strcpy�����ĵ�ַ
//	//return 0;
//}