#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>
int main(){
	int i = 0;
	char arr[] = "12 addewaFSADAa";
	char cpy[100] = {0}; 
	while (arr[i] != '\0')
	{
		cpy[i] = toupper(arr[i]);
		i++;
	}
	printf("%s\n", cpy);
	return 0;
}
//int main(){
//	//0 NO ERROR;1 Operation not permitted;����
//	//errno��һ�������ȫ�����������C���Կ⺯��ִ�й����У������˴��󣬻�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	char *str = strerror(errno);
//	printf("%s\n", str);
//	return 0;
//}


//int main(){
//	char s1[] = "adq@adf$\ndad sd.com";
//	char *s2 = " @.$\n";
//	char *token = NULL;
//	char BUF[1024] = {0};
//	strcpy(BUF, s1);
//	for (token	= strtok(s1, s2); token != NULL; token = strtok(NULL, s2))
//	{
//		printf("%s\n", token);
//	}
//// 	token	= strtok(s1, s2);
//// 	while (token != NULL)
//// 	{
//// 		printf("%s\n", token);
//// 		token = strtok(NULL, s2);
//// 	}
//	return 0;
//}


////�ַ������Һ���ģ��ʵ��
//const char* my_strstr(const char *p1, const char *p2){
//	const char *cur = p1;
//	assert(p1 != NULL);
//	assert(p2 != NULL);//assert(p1 && p2);
//	if( !*p2 ){
//		return p1;
//	}
//	while (*cur)
//	{
//		const char *s1 = cur;
//		const char *s2 = p2;
//
//		while ((*s1 == *s2) && *s1 && *s2)
//		{
//			s1++, s2++;
//		}
//		if (*s2 == '\0')
//			return cur;
//		if (*s1 == '\0')
//			return NULL;
//		cur++;
//	}
//	return NULL;
//}
//int	main(){
//	char *p1 = "abcdef";
//	char *p2 = "defg";
//	//char * ret = strstr(p1, p2);
//	const char * ret = my_strstr(p1, p2);
//	int result = ret - p1;
//	printf("%p\n", ret);
//	printf("%s\n", ret);
//	printf("%d\n", result);
//
//	return 0;
//}


//int main(){
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqewr";
//	int ret = strncmp(p1, p2, 3);//3��ʾ�Ƚϵĸ�����3��
//	printf("%d\n",ret);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2){	
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1 == '\0')
//	{
//		return 0;
//	} 
//	else if (*str1 > *str2)
//	{
//		return 1;
//	} 
//	else
//	{
//		return -1;
//	}
//}
//int main(){
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int cmp = 0;
//	cmp = my_strcmp(p1, p2);
//	//cmp = strcmp(p1, p2);//VS�������У���һ�����ڵڶ�������1����ȷ���0��С�ڷ���-1
//	printf("%d\n", cmp);
//	return 0;
//}
//char *my_strcat(char* dest, const char* src){
//
//	char* ret = dest;
//	assert(dest && src);
//	//�ҵ�Ŀ���ַ�����\0������׷��
//	while (*dest) dest++;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main(){
//	char arr1[30] = "hello";//hello\0
//	char arr2[] = "world";//world\0
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src){
//
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//				//while (*src != '\0')
//				//{
//				//	*dest = *src;
//				//	dest++;
//				//	src++;
//				//}
//				//*dest = *src;
//	//����Ŀ�Ŀռ���ʼ��ַ
//	return ret;
//}
//int main(){
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


////1.�������ķ���2.�ݹ�3.ָ��-ָ��
//int my_strelen(const char *str){
//	int count = 0;
//	assert(str != NULL);
//	while (str != '\0')//while(*str)
//	{
//		count ++;
//		str++;
//	}
//	return count;
//}
//
//int main(){
//	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	int len1 = strlen("abcdef");
//	int len2 = strlen(arr);
//	printf("%d\n%d\n", len1, len2);;
//	if (strlen("abcdef") - strlen(arr) > 0)
//	{
//		printf("hehe\n");
//	} 
//	else
//	{
//		printf("cuowu\n");
//	}
//
//	return 0;
//}