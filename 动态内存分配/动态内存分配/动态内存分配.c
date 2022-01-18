#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(){
//	char* arr = "abcde";//arr的地址上存放的是abcde的字符串常量；代码区，不可修改
//						//arr[] 表示数组的内容是abcde，可修改;栈区？？？？
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
	struct s *ps = (struct s*)malloc(sizeof(struct s));//开辟的空间有n和arr
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
	free(ps ->arr);//释放两次空间，因为malloc了两次
	ps ->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}
////柔性数组-数组大小是可以调整的
//struct s{
//	int n;
//	int arr[];//或者int arr[0];未知大小的
//};
//int main(){
//	//struct s s;
//	//printf("%d\n", sizeof(s));//并不包含柔性数组大小
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
//		strcpy(str, "world");//已经释放了，还用非法访问
//		printf(str);
//	}
//}
//int main(){
//	Test();
//	return 0;
//}

////返回栈空间地址的问题
//char *GetMemory(void) {
//	char p[] = "hello world";
//	//static char p[] = "hello world";正确，p的生命周期不会结束
//	return p; }//局部变量生命周期结束。
////若函数内开辟了堆区（动态内存空间）在函数周期结束后不会被销毁
//void Test(void) {
//	char *str = NULL;
//	str = GetMemory();//p和字符串已经被销毁
//	printf(str);//输出为随机值
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
////第二种改进
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

////代码崩溃
//void GetMemory(char *p) {//创建了临时变量p，存放的str的内容空指针
//	p = (char *)malloc(100);//p存放了动态内存块的地址
//	//p被销毁，但内存块未被释放，存在内存泄露
//}
//void Test(void) {
//	char *str = NULL;
//	GetMemory(str);//值传递，调用后st仍为空指针
//	strcpy(str, "hello world");//无法拷贝，程序崩溃
//	printf(str);//str指向的动态内存空间未被释放
//}
//int main(){
//	Test();
//	return 0;
//}

//动态开辟内存忘记释放（内存泄漏）
//int main(){
//	while (1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}


//realloc函数
// int main(){
// 
// 	int *p = (int*)malloc(40);
// 	if (p == NULL)
// 	{
// 		retrurn 0;
// 	}
// 	//使用
// 	//int* p2 = realloc(p, 80);
// 	//if (p2 != NULL){
// 	//	p = p2;
// 	//}
// 	return 0;
// }

//realloc函数
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
//	//使用malloc开辟的20个字节空间，如果不能满足使用需要
//	//希望拥有40个字节空间，使用realloc()函数调整动态开辟内存空间
//	p2 = (int *)realloc(p, 400);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p2 + i));
//	}
//	return 0;
//}

////calloc函数
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

//malloc和free函数
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
//	free(p);//释放p指向的空间,但p还指向此空间起始地址，容易犯错误，被别人利用
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
//	struct S arr[50];//50个struct S类型的数据，固定的数量
//	
//	return 0;
//}