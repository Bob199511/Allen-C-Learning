#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main(){
//	int a[3][4] = {0};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(a[0][0]));
//	printf("%d\n",sizeof(a[0]));
//	printf("%d\n",sizeof(a[0]+1));
//	printf("%d\n",sizeof(*(a[0]+1)));
//	printf("%d\n",sizeof(a+1));
//	printf("%d\n",sizeof(*(a+1)));
//	printf("%d\n",sizeof(&a[0]+1));
//	printf("%d\n",sizeof(*(&a[0]+1)));
//	printf("%d\n",sizeof(*a));
//	printf("%d\n",sizeof(a[3]));
//
//	return 0;
//}
 int main(){
 	char *p = "abcdef";
 	//printf("%d\n", sizeof(p));
 	//printf("%d\n", sizeof(p+1));
 	//printf("%d\n", sizeof(*p));
 	//printf("%d\n", sizeof(p[0]));
 	//printf("%d\n", sizeof(&p));
 	//printf("%d\n", sizeof(&p+1));
 	//printf("%d\n", sizeof(&p[0]+1));
 	//printf("%d\n", strlen(p));
 	//printf("%d\n", strlen(p+1));
 	//printf("%d\n", strlen(*p));
 	//printf("%d\n", strlen(p[0]));
 	printf("%d\n", strlen(&p));
 	printf("%d\n", strlen(&p+1));
 	printf("%d\n", strlen(&p[0]+1));
 
 	return 0;
 }

//int main(){
//
//char arr[] = "abcdef";
//printf("%d\n", sizeof(arr));
//printf("%d\n", sizeof(arr+0));
//printf("%d\n", sizeof(*arr));
//printf("%d\n", sizeof(arr[1]));
//printf("%d\n", sizeof(&arr));
//printf("%d\n", sizeof(&arr+1));
//printf("%d\n", sizeof(&arr[0]+1));
//printf("%d\n", strlen(arr));
//printf("%d\n", strlen(arr+0));
////printf("%d\n", strlen(*arr));
////printf("%d\n", strlen(arr[1]));
//printf("%d\n", strlen(&arr));
//printf("%d\n", strlen(&arr+1));
//printf("%d\n", strlen(&arr[0]+1));
//return 0;
//}