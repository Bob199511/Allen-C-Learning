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
	Init( &s );//Ҫ�ı�s��ֵ����Ҫ���ڴ����޸ģ����δ����ǵ�ַ��
	printf("%d %c %lf\n", s.a, s.c, s.d);
	return 0;
}

////�޸�Ĭ�϶�����,����Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S{
//	char c1;
//	double d;//������8��Ϊ4
//};
//#pragma pack()//ȡ������Ĭ�϶�����
//int main(){
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

////�ṹ���ڴ����
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
//	struct Node* next;//������,Node* next�������еĴ�������ģ����е�Node
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
//	psa = &sa;//���Ͳ�����
//
//	return 0;
//}

//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
//����������+����+�绰+�Ա�+����,stu�Ǳ�ǩ��struct�ǹؼ���
//struct stu{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6;
//
//struct stu s3;//ȫ�ֱ���
//
//int main(){
//	struct stu s1;//�����ṹ�����
//	struct stu s2;
//	return 0;
//}