#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(){
//	char* arr = "abcde";//arr�ĵ�ַ�ϴ�ŵ���abcde���ַ����������������������޸�
//						//arr[] ��ʾ�����������abcde�����޸�;ջ����������
//	*(arr+0) = 'p';
//	printf("%s\n", arr);
//
//
//}
//struct str{
//	int len;
//	char s[0];
//};
//struct foo {
//	struct str *a;
//};
//int main(int argc, char** argv) {
//	struct foo f={0};
//	if (f.a->s) {
//		printf("%x", f.a->s);
//	}
//	return 0;
//}

struct s 
{
	int n;
	int *arr;
};
int main(){
	struct s *ps = (struct s*)malloc(sizeof(struct s));//���ٵĿռ���n��arr
	 int register (i) ;
	int *ptr = NULL;
	ps -> n = 100;
	i =  0;
	ps ->arr = (int *)malloc(5 * sizeof(int));
	for (i = 0; i < 5; i++)
	{
		ps ->arr[i] = i;
	}
	ptr = (int *)realloc(ps -> arr, 400000 * sizeof(int));
	if (ptr != NULL)
	{
		ps ->arr = ptr;
	}
	free(ps ->arr);//�ͷ����οռ䣬��Ϊmalloc������
	ps ->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}
////��������-�����С�ǿ��Ե�����
//struct s{
//	int n;
//	int arr[];//����int arr[0];δ֪��С��
//};
//int main(){
//	//struct s s;
//	//printf("%d\n", sizeof(s));//�����������������С
//	struct s* ps = (struct s*) malloc(sizeof(struct s) + 5 * sizeof(int));
//	int i = 0;
//	struct s* ptr = NULL;
//	ps -> n = 100;
//	for (i = 0; i < 5; i++)
//	{
//		ps -> arr[i] = i;//0,1,2,3,4
//	}
//	ptr = (struct s*)realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps -> arr[i] = i;//5,6,7,8,9
//	}
//	return 0;
//}


//void Test(void) {
//	char *str = (char *) malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if(str != NULL)
//	{
//		strcpy(str, "world");//�Ѿ��ͷ��ˣ����÷Ƿ�����
//		printf(str);
//	}
//}
//int main(){
//	Test();
//	return 0;
//}

////����ջ�ռ��ַ������
//char *GetMemory(void) {
//	char p[] = "hello world";
//	//static char p[] = "hello world";��ȷ��p���������ڲ������
//	return p; }//�ֲ������������ڽ�����
////�������ڿ����˶�������̬�ڴ�ռ䣩�ں������ڽ����󲻻ᱻ����
//void Test(void) {
//	char *str = NULL;
//	str = GetMemory();//p���ַ����Ѿ�������
//	printf(str);//���Ϊ���ֵ
//}
//int main(){
//	Test();
//	return 0;
//}

////void GetMemory(char **p) {
////	*p = (char *)malloc(100);
////}
////void Test(void) {
////	char *str = NULL;
////	GetMemory(&str);
////	strcpy(str, "hello world");
////	printf(str);
////	free(str);
////	str = NULL;
////}
////�ڶ��ָĽ�
//char* GetMemory(char *p) {
//	p = (char *)malloc(100);
//	return p;
//}
//void Test(void) {
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main(){
//	Test();
//	return 0;
//}

////�������
//void GetMemory(char *p) {//��������ʱ����p����ŵ�str�����ݿ�ָ��
//	p = (char *)malloc(100);//p����˶�̬�ڴ��ĵ�ַ
//	//p�����٣����ڴ��δ���ͷţ������ڴ�й¶
//}
//void Test(void) {
//	char *str = NULL;
//	GetMemory(str);//ֵ���ݣ����ú�st��Ϊ��ָ��
//	strcpy(str, "hello world");//�޷��������������
//	printf(str);//strָ��Ķ�̬�ڴ�ռ�δ���ͷ�
//}
//int main(){
//	Test();
//	return 0;
//}

//��̬�����ڴ������ͷţ��ڴ�й©��
//int main(){
//	while (1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}


//realloc����
// int main(){
// 
// 	int *p = (int*)malloc(40);
// 	if (p == NULL)
// 	{
// 		retrurn 0;
// 	}
// 	//ʹ��
// 	//int* p2 = realloc(p, 80);
// 	//if (p2 != NULL){
// 	//	p = p2;
// 	//}
// 	return 0;
// }

//realloc����
//int main(){
//	int *p = (int*)malloc(20);
//	int i = 0;
//	int *p2 = NULL;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	} 
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//ʹ��malloc���ٵ�20���ֽڿռ䣬�����������ʹ����Ҫ
//	//ϣ��ӵ��40���ֽڿռ䣬ʹ��realloc()����������̬�����ڴ�ռ�
//	p2 = (int *)realloc(p, 400);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p2 + i));
//	}
//	return 0;
//}

////calloc����
//int main(){
//	int i = 0;
//	int *p = (int *)calloc(INT_MAX, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	} 
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//
//}

//malloc��free����
//int main(){
//	int i = 0;
//	int* p = (int* )malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	} 
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);//�ͷ�pָ��Ŀռ�,��p��ָ��˿ռ���ʼ��ַ�����׷����󣬱���������
//	p = NULL;
//	return 0;
//}

//struct S 
//{
//	char name[20];
//	int age;
//};
//
//int main(){
//	struct S arr[50];//50��struct S���͵����ݣ��̶�������
//	
//	return 0;
//}