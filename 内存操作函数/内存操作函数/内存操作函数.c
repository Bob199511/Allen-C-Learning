#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <assert.h>
//�ڴ����ú���
int main(){
	char arr[10] = "";
	memset(arr, '#', 10);//��arrǰʮ���ֽڸ�Ϊ#
	return 0;
}
//int main(){
//	int arr1[] = {1, 2, 3, 4, 5};
//	int arr2[] = {1 ,2, 5, 4, 3};
//	int ret = memcmp(arr1, arr2, 9);//�Ƚ�ǰ9���ֽ�
//	printf("%d\n", ret);
//
//	return 0;
//}

////�ڴ濽��,C���Ա�׼�涨memcpyֻҪ�����ص�������Ϳ����ˣ�
////memmove�����ص��ڴ�Ŀ���
//void* my_memcpy(void* dest, const void* src, size_t count){
//	assert(dest && src);
//	if(dest < src){
//		//��ǰ��󿽱�
//		while (count-- )
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else{
//		//�Ӻ���ǰ����
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return NULL;
//}
////void* my_memcpy(void *dest, void *src, int size){//void*��ʾ���ص��ǵ�ַ,ʵ��Ŀ�ĵغ�Դ���ݵ��ص�����
////
////	int i = 0;
////	int len = size;
////	assert(dest && src);
////	if ((int)dest - (int)src > 0)
////	{
////		for (; len > 0; len--)
////		{
////			*((char*)dest + len - 1) = *((char*)src + len - 1);
////		}
////	}
////	else{
////		for (i = 0;i < size; i++)
////		{
////			*((char*)dest + i) = *((char*)src + i);
////		}
////	}
////	return NULL;
////}
//typedef struct stu{
//	char name[30];
//	int age;
//}stu;
//int main(){
//	int i = 0;
//	double arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	double arr2[5] = { 0 };
//	stu arr3[] = {{"����", 20}, {"����", 22}};
//	stu arr4[3] ={0};
//	my_memcpy(arr1 + 3, arr1, 5 * sizeof(arr1[0]));
//	memcpy(arr2, arr1, 24);//24Ϊ�������ֽڸ���
//	//memcpy(arr4, arr3, sizeof(arr3));
//	for(i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//		printf("%lf ", arr1[i]);
//	for(i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//		printf("%lf ", arr2[i]);
//	return 0;
//}