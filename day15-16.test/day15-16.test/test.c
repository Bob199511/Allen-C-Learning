#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char* re_strcat(char* s, const char* str){
	int i = 0;
	int j = 0;
	while (s[i] != '\0')
		i++;
	for (j = 0; str[j] != '\0'; j++, i++)
	{
		s[i] = str[j];
	}

}
char* re_strcpy(char* s, const char* str){
	int i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return s;
}
// char* re_strcpy(char s[], const char str[]){
// 	int i = 0;
// 	while (str[i] != '\0')
// 	{
// 		s[i] = str[i];
// 		i++;
// 	}
// 	return s;
// }
int main(){
	char s[] = "afsafsda!";
	char string[99] = {0};
	re_strcpy(string, s);
	re_strcat(string, s);
	printf("%s", string);

	return 0;
}

////һƿ��ˮһԪ��2����ƿ��һƿ��ˮ������Ԫ�ܺȶ���ƿ��ˮ
//int sum_bottle(int x){
//	int sum = 0;
//	int temp = 0;//��ƿ����Ϊ����ʱ���洢ʣ���һ����ƿ��
//	while (x / 2 != 0)
//	{
//		sum += x;
//		x = x/2;
//		if (x % 2 == 1)
//		{
//			temp++;
//		}
//		if (temp == 2)
//		{
//			x += 1;
//			temp = 0;
//		}
//	}
//	return sum;
//}
//int main(){
//	int money = 0;
//	scanf("%d", &money);
//	printf("%d\n", sum_bottle(money));
//	return 0;
//}

////�ҳ�������ֻ����һ�ε���
//int int_cmp(const void* s1, const void* s2){
//	return *(int*)s1 - *(int*)s2;
//}
//int main(){
//	int arr[] = {12, 213, 213, 113, 133, 123 ,123, 133, 1234, 12, 123454, 1234};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);//����
//	for (i = 0; i < sz; i++)//��ӡ����Ԫ��
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i< sz; i++)//�ҳ�ֻ����һ�ε�Ԫ��
//	{
//		if (arr[i] == arr[i + 1])//�����i��Ԫ�غͺ�һ��Ԫ����ȣ�i����1
//		{
//			i++;
//		}
//		else
//			printf("%d ",arr[i]);
//	}
//	return 0;
//}