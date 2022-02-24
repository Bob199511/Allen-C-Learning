#include <iostream>
#include<list>
using namespace std;

void printList(list<int>&L)
{
	for(list<int> :: iterator it = L.begin(); it != L.end(); ++it){
		cout << *it << ' ';
	}
	cout << endl;
}

////list构造,单个赋值，拷贝，定区间赋值，多个相同数赋值
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_front(50);
//	printList(L1);
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//	list<int>L3(L2);
//	printList(L2);
//	list<int>L4(10, 99);
//	printList(L4);
//
//}
////list赋值和交换,=,assign,swap
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;
//	printList(L2);
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L3);
//	list<int>L4;
//	L4.assign(10,99);
//	printList(L4);
//
//	L4.swap(L1);
//	cout << "L1,L4swap:" << endl;
//	printList(L1);
//	printList(L4);
//
//}

////大小操作size,resize,empty
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//	if(!L1.empty()){
//		cout << "L1 is not empty" << endl;
//	}
//	L1.resize(10, 99);
//	printList(L1);
//	L1.resize(30);
//	printList(L1);
//	L1.resize(2);
//	printList(L1);
//}
////插入和删除
//void test01()
//{
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_front(30);
//	L.push_front(40);
//	printList(L);
//	L.pop_back();
//	L.pop_front();
//	printList(L);
//	L.insert(L.begin(), 999);
//	printList(L);
//	L.insert(L.begin(), ++L.begin(), L.end());
//	printList(L);
//	L.erase(L.begin());
//	printList(L);
//	L.remove(999);
//	printList(L);
//	L.clear();
//	printList(L);
//
//}

////数据存取
//void test01()
//{
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_front(30);
//	L.push_front(40);
//	cout << L.front() << endl;
//	cout << L.back() <<endl;
//	L.front() = 400;
//	L.back() = 200;
//	printList(L);
//	//验证迭代是不是支持随机访问的
//	list<int>::iterator it = L.begin();
//	it++;
//	cout << *it << endl;
//	it--;
//	cout << *it << endl;
//	//it = it + 1;  不支持随机访问
//}

//反转和排序reverse,sort
bool myCompare(int v1, int v2){
	return v1 > v2;//降序操作

}
void test01()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_front(30);
	L.push_front(40);
	printList(L);
	L.reverse();
	printList(L);
	L.sort();
	printList(L);
	L.sort(myCompare);
	printList(L);

}
int main()
{
    test01();
    return 0;
}
