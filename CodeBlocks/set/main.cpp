#include <iostream>
#include<set>
using namespace std;

void printSet(set<int> &S){
	for(set<int>::iterator it = S.begin(); it != S.end(); ++it){
		cout << *it << ' ';
	}
	cout << endl;
}
void printMSet(multiset<int> &S){
	for(set<int>::iterator it = S.begin(); it != S.end(); ++it){
		cout << *it << ' ';
	}
	cout << endl;
}

////构造和赋值
//void test01()
//{
//	set<int>s1;
//	//插入数据只有insert方式
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(110);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(50);
//	printSet(s1);
//	set<int>s2;
//	s2 = s1;
//	printSet(s2);
//	set<int>s3(s2);
//	printSet(s3);
//}
////大小和交换size,empty,swap
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(880);
//	s1.insert(1);
//	s1.insert(19);
//
//	printSet(s1);
//	cout << "s1.size() = " << s1.size() << endl;
//	if( !s1.empty()){
//		cout << "s1 is not empty!" << endl;
//	}
//	set<int>s2;
//	s2.insert(190);
//	s2.insert(399);
//	printSet(s2);
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
////插入和删除
//void test01()
//{
//	set<int>s;
//	s.insert(30);
//	s.insert(20);
//	s.insert(50);
//	s.insert(150) ;
//	printSet(s);
//	s.erase(s.begin());
//	printSet(s);
//	s.erase(50);
//	printSet(s);
//	s.erase(s.begin(), s.end());
//	printSet(s);
//	s.insert(30);
//	s.insert(20);
//	s.insert(50);
//	s.insert(150);
//	printSet(s);
//	s.clear();
//	printSet(s);
//
//}

////查找和统计
//void test01()
//{
//	set<int>s;
//	s.insert(30);
//	s.insert(20);
//	s.insert(50);
//	s.insert(50);
//	s.insert(150) ;
//	printSet(s);
//	set<int>::iterator it = s.find(50);
//	if(it != s.end())
//		cout << "找到50 " <<endl;
//	it = s.find(51);
//	if(it != s.end())
//		cout << "找到51 " <<endl;
//	else
//		cout << "51 is not found1" << endl;
//	cout << &*it << endl;//输出迭代器中对应元素位置
//	cout << &*(s.begin()) << endl;
//	cout << "50出现的次数：" << s.count(50) <<endl;
//	cout << "51出现的次数：" << s.count(51) << endl;
//
//}

////set与multiset的区别
//void test01()
//{
//	set<int>s;
//
//	s.insert(30);
//	pair<set<int>::iterator, bool> ret = s.insert(20);
//	if(ret.second){
//		cout << "第二次插入成功" << endl;
//	}
//	else
//		cout << "第二次插入失败" << endl;
//	ret = s.insert(50);
//	if(ret.second){
//		cout << "第1次插入成功" << endl;
//	}
//	else
//		cout << "第1次插入失败" << endl;
//	s.insert(50);
//	s.insert(150) ;
//	printSet(s);/	s.insert(20);
//
//	multiset<int>ms;
//	ms.insert(30);
//	ms.insert(20);
//	ms.insert(50);
//	ms.insert(50);
//	ms.insert(150) ;
//	printMSet(ms);
//}
////pair对组创建
//void test01()
//{
//	pair<string, int>p("Tom", 20);
//	cout << p.first << ": " << p.second <<endl;
//	pair<string, int>p2 = make_pair("Allen", 28);
//	cout << p2.first << ": " << p2.second <<endl;
//}
////set重存放内置数据类型排序
//class myCmp{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	set<int>s;
//
//	s.insert(30);
//	s.insert(10);
//	s.insert(7);
//	s.insert(150) ;
//	printSet(s);
//
//	set<int, myCmp>s2;
//
//	s2.insert(30);
//	s2.insert(10);
//	s2.insert(7);
//	s2.insert(150) ;
//
//	for(set<int, myCmp>::iterator it = s2.begin(); it != s2.end(); ++it){
//		cout << *it << ' ';
//	}
//	cout << endl;
//}

//自定义数据类型指定排序

class Person
{
public:
	Person(string name, int age){
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};
class myCmp{
public:
	bool operator()(const Person p1, const Person p2){
		return p1.m_age > p2.m_age;
	}
};
void test01()
{
	set<Person, myCmp>s;
	Person p1("张三", 25);
	Person p2("里三", 15);
	Person p3("特然三", 29);
	Person p4("啦啦三", 5);
	s.insert(p2);
	s.insert(p1);
	s.insert(p3);
	s.insert(p4);
	for(set<Person, myCmp>::iterator it = s.begin(); it != s.end(); ++it){
		cout << it->m_name << "': '" << it->m_age <<endl;
	}
}
int main()
{
    test01();
    return 0;
}
