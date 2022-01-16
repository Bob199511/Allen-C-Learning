#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <assert.h>
//内存设置函数
int main(){
	char arr[10] = "";
	memset(arr, '#', 10);//将arr前十个字节改为#
	return 0;
}
//int main(){
//	int arr1[] = {1, 2, 3, 4, 5};
//	int arr2[] = {1 ,2, 5, 4, 3};
//	int ret = memcmp(arr1, arr2, 9);//比较前9个字节
//	printf("%d\n", ret);
//
//	return 0;
//}

////内存拷贝,C语言标准规定memcpy只要处理不重叠的情况就可以了；
////memmove处理重叠内存的拷贝
//void* my_memcpy(void* dest, const void* src, size_t count){
//	assert(dest && src);
//	if(dest < src){
//		//从前向后拷贝
//		while (count-- )
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else{
//		//从后向前拷贝
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return NULL;
//}
////void* my_memcpy(void *dest, void *src, int size){//void*表示返回的是地址,实现目的地和源数据的重叠拷贝
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
//	stu arr3[] = {{"张三", 20}, {"李四", 22}};
//	stu arr4[3] ={0};
//	my_memcpy(arr1 + 3, arr1, 5 * sizeof(arr1[0]));
//	memcpy(arr2, arr1, 24);//24为拷贝的字节个数
//	//memcpy(arr4, arr3, sizeof(arr3));
//	for(i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//		printf("%lf ", arr1[i]);
//	for(i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//		printf("%lf ", arr2[i]);
//	return 0;
//}