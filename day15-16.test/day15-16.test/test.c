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

////一瓶汽水一元，2个空瓶换一瓶汽水，多少元能喝多少瓶汽水
//int sum_bottle(int x){
//	int sum = 0;
//	int temp = 0;//当瓶子数为奇数时，存储剩余的一个空瓶子
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

////找出数组中只出现一次的数
//int int_cmp(const void* s1, const void* s2){
//	return *(int*)s1 - *(int*)s2;
//}
//int main(){
//	int arr[] = {12, 213, 213, 113, 133, 123 ,123, 133, 1234, 12, 123454, 1234};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);//排序
//	for (i = 0; i < sz; i++)//打印数组元素
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i< sz; i++)//找出只出现一次的元素
//	{
//		if (arr[i] == arr[i + 1])//如果第i个元素和后一个元素相等，i自增1
//		{
//			i++;
//		}
//		else
//			printf("%d ",arr[i]);
//	}
//	return 0;
//}