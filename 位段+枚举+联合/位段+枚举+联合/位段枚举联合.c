#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//����-������-������
union Un{
	char c;
	int i;
};
int main(){
	union Un u;
	u.i = 1;
	printf("%d\n",(int)(u.c));//�жϴ�С�˴洢��ʽ
	printf("%d\n", sizeof(u));
	printf("%p\n%p\n", &(u.c), &(u.i));

	return 0;
}


////ö��
//enum sex{
//	male = 2,
//	female = 4,
//	secret
//};
//int main(){
//	enum sex x = male;
//	printf("%d\n", x);
//	return 0;
//}


//������Ŀ
//char * longestCommonPrefix(char ** strs, int strsSize){
//	int i = 0;
//	unsigned int j = 0;
//	if(strsSize == 0)
//		return "";
//	for(j = 0; j < strlen(strs[0]); j++, i = 0) {
//		while((i < strsSize - 1) && (strs [i][j] != '\0')){
//			if(strs[i][j] == strs[i + 1][j])
//				i++;
//			else 
//				break;
//		}
//		if(i != strsSize - 1){
//			strs[0][j] = '\0';
//			break;
//		}
//
//	}
//	return strs[0];
//}
//int main(){
//	char s1[] = "flower";
//	char s2[] = "flow";
//	char s3[] = "flight";
//	char* strs[3] = {s1, s2, s3};
//
//	printf("%s\n", longestCommonPrefix(strs, 3));
//
//	return 0;
//}

//struct s //λ��-������λ
//{
//	int a : 2;//��ֻ��2��bit,2������λ���4��״̬
//	int b : 5;
//	int c : 10;
//	int d : 30;//�������ֲ��ܴ���32
//};//�ܹ���Ҫ47������λ
//int main(){
//	struct s s = {0};
//	printf("%d\n", sizeof(s));//���Ϊ8�ֽ�
//	return 0;
//}