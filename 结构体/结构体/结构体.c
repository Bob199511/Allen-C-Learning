#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct s 
{
	int a;
	char c;
	double d;
};
void Init(struct s *tmp){

	tmp -> a = 100;
	tmp -> c = 'w';
	tmp -> d = 3.14;
}
int main(){
	struct s s = {0};
	Init( &s );//要改变s的值，需要在内存上修改（传参传的是地址）
	printf("%d %c %lf\n", s.a, s.c, s.d);
	return 0;
}

////修改默认对齐数,设置默认对齐数为4
//#pragma pack(4)
//struct S{
//	char c1;
//	double d;//对齐数8变为4
//};
//#pragma pack()//取消设置默认对齐数
//int main(){
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

////结构体内存对齐
//struct s1{
//	char c1;
//	int a;
//	char c2;
//};
//struct s2{
//	char c1;
//	char c2;
//	int a;
//};
//int main(){
//	struct s1 s1 = {0};
//	struct s2 s2 = {0};
//	printf("%d %d", sizeof(s1), sizeof(s2));
//
//	return 0;
//}

//struct T{
//	float weight;
//	int age;
//};
//struct S 
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main(){
//	//struct S s = {'s', 100, 3.14, "hello bit"};
//	struct S s = {'s', {77.4, 26}, 100, 3.14, "hello bit"};
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%f\n", s.st.weight);
//	return 0;
//}

//typedef struct Node 
//{
//	int data;
//	struct Node* next;//自引用,Node* next错误，先有的大括号里的，再有的Node
//}Node;
//int main(){
//	struct Node s2;
//	Node s1;
//	return 0;
//}

//struct{
//	int a;
//	char c;
//}* psa;
//struct{
//	int a;
//	char c;
//}sa;
//
//int main(){
//	psa = &sa;//类型不兼容
//
//	return 0;
//}

//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述：属性+名字+电话+性别+年龄,stu是标签，struct是关键字
//struct stu{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6;
//
//struct stu s3;//全局变量
//
//int main(){
//	struct stu s1;//创建结构体变量
//	struct stu s2;
//	return 0;
//}