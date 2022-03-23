//#include <iostream>
//
//using namespace std;
//
//void numCount(int a, int *rev, int &b){
//	for(b = 0; a != 0; b++){
//		rev[b] = a % 10;
//		a= a / 10;
//	}
//}
//
//int main()
//{
//    int a;
//    while(cin >> a){
//		int bit = 0, rev[5];
//		for(int i = 0; i < 5; i++){
//			rev[i] = 0;
//		}
//		numCount(a, rev, bit);
//		int sum = 0;
//		for(int i = 0; i < bit; i++){
//			sum = sum * 10;
//			sum = sum + rev[i];
//		}
//		cout << bit << " " << sum << endl;
//    }
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main(void){
//	int a;
//	while(cin >> a){
//		int sum = 0;
//		for(int i = 0; i < 10; i++){
//			for(int j = 0; j < 10; j++){
//				for(int k = 0; k < 10; k++){
//					if(a == (i + k) * 101 + 2 * j * 10 ){
//						cout << i << j << k << endl;
//						++sum;
//					}
//				}
//			}
//		}
//		cout << sum << endl;
//	}
//
//	return 0;
//}

//#include<iostream>
//#include<memory>
//#include<string.h>
//using namespace std;
//
//typedef int elemType;
//struct tree{
//	struct tree* left;
//	struct tree* right;
//	elemType data;
//};
//
//elemType arr[10];
//void toBST(struct tree* BstTree, int i, int Size){
//		int lf = 2*i + 1;
//		int rg = 2*(i + 1);
//		if(lf < 10){
//			struct tree* Lnode = (struct tree*)malloc(sizeof(BstTree));
//			Lnode->data = arr[lf];
//			BstTree->left = Lnode;
//			toBST(Lnode, lf, Size);
//		}
//		else{
//			BstTree->left = NULL;
//			return;
//		}
//		if(rg < 10){
//			struct tree* Rnode = (struct tree*)malloc(sizeof(BstTree));
//			Rnode->data = arr[rg];
//			BstTree->right = Rnode;
//			toBST(Rnode, rg, Size);
//		}
//		else{
//			BstTree->left = NULL;
//			return;
//		}
//}
//
//
//
//
//int main(void){
//	for(int i = 0; i < 10; ++i){
//		cin >> arr[i];
//	}
//	struct tree* BstTree;
//	BstTree = (struct tree*)malloc(sizeof(BstTree));
//	BstTree->left = NULL;
//	BstTree->right = NULL;
//	BstTree->data = arr[0];
//	toBST(BstTree, 0, 10);
//
//	struct tree* Head = BstTree;
//	while(Head != NULL){
//		cout << Head->data << " ";
//		Head = Head->left;
//	}
//
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//int main(void){
//	long long int sum = 0;
//	for(int i = 1; i < 999; i += 2){
//		sum += i*(i+1)*(i+2);
//	}
//	cout << sum << endl;
//	return 0;
//}

//#include<iostream>
//#include<list>
//#include<algorithm>
//
//using namespace std;
//
//void printList(list<char> ss){
//	for(list<char>::iterator i = ss.begin(); i != ss.end(); ++i){
//		 cout << *i << "  ";
//	}
//	cout << endl;
//}
//
//int main(){
//	list<char> ss;
//	for(int i = 0; i < 10; i++){
//		ss.push_back('a' + i);
//	}
//	printList(ss);
//	list<char> :: iterator it1 = ss.begin();
//	list<char> :: iterator it2 = ss.begin();
//	for(int i = 0; i < 8; i++){
//		if(i <= 2){
//			it1++;
//		}
//		it2++;
//	}
//	reverse(it1, it2);
//	ss.reverse();
//
//
//	printList(ss);
//	return 0;
//}

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main(){
//	string s1;
//	cin >> s1;
//	string s2 = "abc";
//	int len = s1.size();
//	for(int i = len; i >= 0; i--){
//		for(int j = 0;j < 3; j++){
//			if(s1[i] == 'c');
//			else
//				continue;
//			if(s1[i - 1] == 'b');
//			else continue;
//			if(s1[i - 2] == 'a');
//			else continue;
//
//			for(int k = i; k < len; k++){
//				s1[k] = s1[k + 1];
//			}
//			len--;
//
//		}
//	}
//	for(int i = 0; i < len; i++){
//		cout <<s1[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//#include<deque>
//#include<stdlib.h>
//
//using namespace std;
//
//int main(){
//
//	deque<int> arr;
//	int sum;
//	for(int i = 0; i < 10; i++){
//		arr.push_back(rand()%10);
//	}
//	cin >> sum;
//	sort(arr.begin(), arr.end());
//	for(deque<int>::iterator it = arr.begin(); it < arr.end(); it++){
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	for(int i = 0; i < 10; i++){
//		for(int j = i + 1;j < arr.size(); j++ ){
//			if(arr[i] + arr[j] == sum){
//				cout << arr[i] << arr[j] << endl;
//			}
//		}
//	}
//
//
//	return 0;
//}

//#include<iostream>
//#include<list>
//#include<algorithm>
//#include<cstdlib>
//
//using namespace std;
//
//int main(){
//	list<char> s1;
//	for(int i = 0; i < 100; i++){
//		s1.push_back(rand()%10 + 'a');
//	}
//	for(list<char>::iterator it = s1.begin(); it != s1.end(); it++){
//		cout << *it;
//	}
//	cout << endl;
//	int index;
//	cin >> index;
//	int i = 0;
//	list<char>::iterator it1 = s1.begin();
//	for(list<char>::iterator it2 = s1.begin();it2 != s1.end(); it2++,i++){
//		if(i >= index){
//			it1++ ;
//		}
//	}
//	cout << *it1 << endl;
//
//
//	return 0;
//}

//#include<stdio.h>
//#include<cstdlib>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int main(){
//	int arr[10];
//	for(int i = 0; i < 10; i++){
//		arr[i] = rand()%100;
//	}
//	for(int i = 0; i < 10; i++){
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	float sum = 0;
//	sort(arr, arr + 10);
//	for(int i = 0; i < 10; i++){
//		cout << arr[i] << " ";
//		sum += arr[i];
//	}
//	cout << endl;
//
//	cout << arr[9] << " " << sum / 10;
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main(){
//
//	float sum;
//	for(float i = 1, j = 2; i < 1000000; ){
//		sum =  i / j;
//		float temp = j;
//		j += i;
//		i = temp;
//	}
//	cout << sum << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<list>
//#include<algorithm>
//
//using namespace std;
//
//int main(){
//	list<char> s;
//
//	for(int a = 0; a < 5; a++){
//		s.push_back('A'+a);
//	}
//	for(list<char>::iterator it = s.begin(); it != s.end(); it++){
//		cout << *it;
//	}
//	cout << endl;
//	list<char> :: iterator it1, it2;
//	it1 = s.begin();
//	it2 = s.begin();
//
//	for(int i = 0;i < 3; i++){
//		it1++;
//		it2++;
//	}
//	it2++;
//	reverse(s.begin(),it1);
//	reverse(it1, s.end());
//	for(list<char>::iterator it = s.begin(); it != s.end(); it++){
//		cout << *it;
//	}
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int main(){
//	int a, b;
//	cin >> a >> b;
//	int sum = 0;
//	while(b != 1){
//		if(b%a != 0){
//			cout << "not" << endl;
//			break;
//		}
//		else{
//			b /= a;
//			sum++;
//			cout << b << endl;
//		}
//	}
//	if(b == 10)
//		cout << "yes" << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main(){
//	string s;
//	cin >> s;
//	int pos, len;
//	cin >> pos >> len;
//	if(pos + len - 1 > s.size()){
//		return -1;
//	}
//	for(int i = 0; i < len; i++){
//		cout << s[pos + i - 1];
//	}
//	cout << endl;
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp(const void* s1, const void * s2){
//	int a = * (const int *)s1;
//	int b = * (const int *)s2;
//	if(a>b)
//		return 1;
//	else if(a == b)
//		return 0;
//	else
//		return -1;
//}
//
//
//int main(){
//	int arr[10];
//	for(int i = 0; i < 10; i++){
//		arr[i] = i;
//	}
//	arr[3] = 6;
//	qsort(arr, sizeof(arr)/sizeof(int),sizeof(int), cmp);
//	for(int i = 0; i < 10; i++){
//		if(arr[i] == arr[i+1]){
//			printf("  %d  \n", arr[i]);
//			break;
//		}
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int elemType;
//
//typedef struct tree{
//	struct tree* left;
//	struct tree* right;
//	elemType data;
//}Btree;
//
//void PreOrder(Btree* s, elemType* arr, int index){
//	arr[index] = s->data;
//	if(s->left != NULL){
//		PreOrder(s->left, arr, index+1);
//	}
//	if(s->right != NULL){
//		PreOrder(s->right, arr, index + 1);
//	}
//
//}
//
//int mycmp(const void* a1, const void* b1){
//	int a = *(int *)a1;
//	int b = *(int *)b1;
//	if(a > b)
//		return -1;
//	else if(a == b)
//		return 0;
//	else
//		return 1;
//}
//int main(){
//	Btree * s;
//	s = (Btree*)malloc(sizeof(Btree));
//	s->data = 5;
//	s->left = NULL;
//	s->right = NULL;
//	Btree * head = s;
//	for(int i = 0; i < 19; i++){
//		Btree* node = (Btree*)malloc(sizeof(Btree)) ;
//		node->data = i;
//		node->left = NULL;
//		node->right = NULL;
//		s->left = node;
//		s = s->left;
//	}
//	elemType arr[20];
//	for(int i = 0; i < 20; i++)
//		arr[i] = 0;
//	PreOrder(head, arr, 0);
//	for(int i = 0;i < 20;i++){
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	qsort(arr, 20, sizeof(int),mycmp);
//	for(int i = 0;i < 20;i++){
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	int sum = 0, number = 0;
//	for(int i = 0, jishu = 1; i < 20; i++){
//		if(arr[i] == arr[i + 1]){
//			jishu++;
//		} else
//			jishu = 1;
//		if(jishu > sum){
//			sum = jishu;
//			number = arr[i];
//		}
//	}
//	printf("%d %d\n", number, sum);
//	return 0;
//}

//#include<stdio.h>
//
//typedef struct{
//	float oil;
//	float distance;
//
//}station;
//
//int main() {
//	station arr[6];
//	for(int i = 0; i < 6; i++){
//		scanf("%f %f", &arr[i].oil, &arr[i].distance);
//	}
//	float TOil = 0, TDis = 0;
//	int i = 0;
//	for(i = 0; i < 6; i++){
//		TOil += arr[i].oil;
//		TOil -= arr[i].distance;
//		if(TOil < 0){
//			printf("顺时针不行\n");
//			break;
//		}
//	}
//	if(i == 6){
//		printf("顺时针方向可以\n");
//	}
//	TOil = 0, TDis = 0;
//	for(i = 0; i < 6; i++){
//		int j = (6 - i) % 6;
//		TOil += arr[j].oil;
//		TOil -= arr[j].distance;
//		if(TOil < 0){
//			printf("逆时针不行\n");
//			break;
//		}
//	}
//	if(i == 6){
//		printf("逆时针方向可以\n");
//	}
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<iostream>
//
//using namespace std;
//
//int main(){
//	string sum, a, b;
//	cin >> a >> b;
//	for(unsigned int i = 0; i < a.size() + b.size(); i++){
//		sum[i] = '0';
//	}
//	for(unsigned int i = 0;i < b.size(); i++){
//		for(unsigned int j = 0; j < a.size(); j++){
//			if((sum[j + i] - '0') + (a[j] - '0') >= 10){
//				int k = j;
//				int f = ((sum[k] - '0') + (a[k] - '0')) % 10;
//				sum[k + 1 + i] += 1;
//				sum[k + i] = '0' + ((sum[k] - '0') + (a[k] - '0')) % 10;
//				k++;
//				while((sum[k + i] - '0') + f >= 10){
//					sum[k + 1 + i] += 1;
//					sum[k + i] = '0' + ((sum[k] - '0') + f) % 10;
//					f =  ((sum[k] - '0') + f) % 10;
//					k++;
//				}
//			}
//			else
//				sum[j + i] += a[j] - '0';
//		}
//	}
//	for(unsigned int i = 0; i < a.size() + b.size(); i++){
//		cout << sum[i] << "  " ;
//	}
//
//	return 0;
//}


