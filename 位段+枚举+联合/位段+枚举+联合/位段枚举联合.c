#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//联合-联合体-共用体
union Un{
	char c;
	int i;
};
int main(){
	union Un u;
	u.i = 1;
	printf("%d\n",(int)(u.c));//判断大小端存储方式
	printf("%d\n", sizeof(u));
	printf("%p\n%p\n", &(u.c), &(u.i));

	return 0;
}


////枚举
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


//力扣题目
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

//struct s //位段-二进制位
//{
//	int a : 2;//，只需2个bit,2个比特位表达4种状态
//	int b : 5;
//	int c : 10;
//	int d : 30;//后面数字不能大于32
//};//总共需要47个比特位
//int main(){
//	struct s s = {0};
//	printf("%d\n", sizeof(s));//输出为8字节
//	return 0;
//}