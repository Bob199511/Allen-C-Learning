#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;
//deque容器
void printDeuque(deque<int>&d){
	for(deque<int>::iterator it = d.begin(); it != d.end(); it++){
		//*it = 100;  注意有些版本iterator前需要变成const_iterator,*it不能赋值
		cout << *it << ' ';
	}
	cout << endl;
}
////构造
//void test01()
//{
//	deque<int>d1;
//	for(int i = 0; i < 10; ++i){
//		d1.push_back(i);
//	}
//	printDeuque(d1);
//	deque<int>d2(d1.begin(), d1.end());
//	printDeuque(d2);
//	deque<int>d3(10, 100);
//	printDeuque(d3);
//	deque<int>d4(d3);
//	printDeuque(d4);
//}
// //赋值操作 ,operator=, assign
//void test01()
//{
//	deque<int>d1(10, 100);
//	printDeuque(d1);
//	deque<int>d2;
//	d2 = d1;
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeuque(d2);
//	printDeuque(d3);
//	printDeuque(d4);
//}
////插入和删除 push_back,push_front,pop_back,pop_front,insert,erase,clear
//void test01()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(1000);
//	d1.push_front(2000);
//	printDeuque(d1);
//	d1.pop_back();
//	printDeuque(d1);
//	d1.pop_front();
//	printDeuque(d1);
//
//	d1.insert(d1.begin(), 40);
//	printDeuque(d1);
//	d1.insert(d1.begin(), 4, 999);
//	printDeuque(d1);
//	//按区间进行插入
//	deque<int>d2(5, 1);
//
//	d2.insert(d2.begin(), d1.begin(), d1.end());
//	printDeuque(d2);
//	deque<int>::iterator it = d2.begin();
//	it += 4;
//	d2.erase(it);
//	printDeuque(d2);
//	d2.erase(d2.begin(), d2.end());
//	printDeuque(d2);
//	d1.clear();
//	printDeuque(d1);
//}
////数据存取  .at(），【】，front（），back（）
//void test01()
//{
//	deque<int>d;
//	for(int i = 0; i < 10; ++i){
//		d.push_back(i);
//	}
//	printDeuque(d);
//	cout << d[0] << endl;
//	cout << d.at(0) << endl;
//	cout << d.front() << endl;
//	cout << d.back() << endl;
//}
//排序操作 sort
void test01()
{
	 deque<int>d;
	 for(int i = 0; i < 10; ++i){
		d.push_back(rand());
	 }
	 printDeuque(d);
	 sort(d.begin(), d.end());
	 printDeuque(d);
	 //错误操作：迭代器套迭代器不正确
//	 deque<deque<int>>d2;
//	 for(int i = 0; i < 10; i++){
//		for(int j = 0; j < 10; ++j){
//			d2[i][j] = i * j;
//		}
//		cout << endl;
//	 }
}
int main()
{
    test01();
    return 0;
}
