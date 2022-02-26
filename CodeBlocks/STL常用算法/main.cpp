#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
////常用遍历算法for_each
//void print01(int v){
//	cout << v << " ";
//}
//class myPrint
//{
//public:
//	void operator()(int v){
//		cout << v << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for(int i = 0; i <10; ++i){
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//}

////常用遍历算法transform
//class Transform{
//public:
//	int operator()(int v){
//		return v;
//	}
//};
//class print0{
//public:
//	void operator()(int v){
//		cout << v << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for(int i = 0; i < 10; ++i){
//		v.push_back(i);
//	}
//	vector<int>vTarget;
//	vTarget.resize(v.size());
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//	for_each(vTarget.begin(), vTarget.end(), print0());
//	cout << endl;
//}

////查找算法内置和自定义
//class Person{
//public:
//	Person(string name, int age){
//		this->m_name = name;
//		this->m_age = age;
//	}
//	//重载==号
//	bool operator==(const Person&p){
//		if(this->m_name == p.m_name && this->m_age == p.m_age)
//			return true;
//		return false;
//	}
//	string m_name;
//	int m_age;
//};
//class pCmp{
//public:
//	};
//void test01()
//{
//	vector<int>v;
//	for(int i = 0; i < 10; ++i){
//		v.push_back(i);
//	}
//	vector<int> :: iterator it = find(v.begin(), v.end(), 5);
//	if(it == v.end()){
//		cout << "not found " << endl;
//	}
//	else
//		cout << "find" << endl;
//
//	vector<Person>vp;
//	Person p1("aaa", 10);
//	Person p2("bbb", 15);
//	Person p3("ccc", 23);
//	Person p4("ddd", 15);
//	vp.push_back(p1);
//	vp.push_back(p2);
//	vp.push_back(p3);
//	vp.push_back(p4);
//	vector<Person> :: iterator it1 = find(vp.begin(), vp.end(), p2);
//	if(it1 == vp.end()){
//		cout << "not found " << endl;
//	}
//	else
//		cout << "find" << endl;
//}

//条件查找find_if

void test01()
{


}
int main()
{
    test01();
    return 0;
}
