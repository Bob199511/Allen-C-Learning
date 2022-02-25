#include <iostream>
#include<map>
#include<string>
using namespace std;

void printMap(map<int, int>&m){
	for(map<int, int>::iterator it = m.begin(); it != m.end(); ++it){
		cout << "key值：" << (*it).first << " " << "value：" << (*it).second << endl;
	}
	cout << endl;
}
////构造和赋值
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(20, 10));
//	m.insert(pair<int, int>(3, 10));
//	m.insert(pair<int, int>(5, 10));
//	printMap(m);
//	map<int, int>m1(m);
//	printMap(m1);
//	map<int, int>m3;
//	m3 = m1;
//	printMap(m3);
//}

////大小和交换size,empty,swap
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(20, 10));
//	m.insert(pair<int, int>(3, 10));
//	m.insert(pair<int, int>(5, 10));
//	printMap(m);
//	cout <<"m.size()= " <<m.size() << endl;
//	if(m.empty()){
//		cout << "m is empty!" << endl;
//	}
//	else{
//		cout << "m is not empty" << endl;
//	}
//	map<int, int>m2;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(20, 10));
//	m2.swap(m);
//	printMap(m2);
//
//}

////插入和删除
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(2, 8));
//	m.insert(make_pair(4, 18));
//	m.insert(make_pair(1, 89));
//	m.insert(pair<int, int>(8, 52));
//	//m.insert<pair<int, int>::value_type(4, 17));
//	m[5] = 20;
//	printMap(m);
//	m.erase(m.begin());
//	printMap(m);
//	m.erase(5);
//	printMap(m);
//	m.clear();
//	printMap(m);
//}

////插找和统计
//void test01()
//{
//	map<int, int>m1;
//	m1.insert(pair<int, int>(10, 20));
//	m1.insert(make_pair(20, 30));
//	m1.insert(pair<int, int>(40, 50));
//	m1.insert(make_pair(1, 3));
//
//	printMap(m1);
//	map<int, int>::iterator pos = m1.find(20);
//	if(pos != m1.end())
//		cout << "find" <<endl;
//	else
//		cout << "not find" << endl;
//	cout << "m1.count(10) = " << m1.count(10) << endl;
//	cout << "m1.count(1) = " << m1.count(1) << endl;
//	cout << "m1.count(11) = " << m1.count(11) << endl;
//	multimap<int, int>m2;
//	m2.insert(pair<int, int>(10, 20));
//	m2.insert(pair<int, int>(10, 20));
//	m2.insert(pair<int, int>(10, 20));
//	cout << "m2.count(10) = " << m2.count(10) << endl;
//}
class myCmp{
public:
	bool operator()(int v1, int v2){
		return v1 >v2;
	}
};
void test01(){
	map<int, int, myCmp>m1;
	m1.insert(pair<int, int>(10, 20));
	m1.insert(make_pair(20, 30));
	m1.insert(pair<int, int>(40, 50));
	m1.insert(make_pair(1, 3));
	for(map<int, int, myCmp>::iterator it = m1.begin(); it != m1.end(); ++it){
		cout << "key值：" << (*it).first << " " << "value：" << (*it).		second << endl;
	}
	cout << endl;
}
int main()
{
    test01();
    return 0;
}
