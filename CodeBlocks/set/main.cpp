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

////����͸�ֵ
//void test01()
//{
//	set<int>s1;
//	//��������ֻ��insert��ʽ
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
////��С�ͽ���size,empty,swap
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
////�����ɾ��
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

////���Һ�ͳ��
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
//		cout << "�ҵ�50 " <<endl;
//	it = s.find(51);
//	if(it != s.end())
//		cout << "�ҵ�51 " <<endl;
//	else
//		cout << "51 is not found1" << endl;
//	cout << &*it << endl;//����������ж�ӦԪ��λ��
//	cout << &*(s.begin()) << endl;
//	cout << "50���ֵĴ�����" << s.count(50) <<endl;
//	cout << "51���ֵĴ�����" << s.count(51) << endl;
//
//}

////set��multiset������
//void test01()
//{
//	set<int>s;
//
//	s.insert(30);
//	pair<set<int>::iterator, bool> ret = s.insert(20);
//	if(ret.second){
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//		cout << "�ڶ��β���ʧ��" << endl;
//	ret = s.insert(50);
//	if(ret.second){
//		cout << "��1�β���ɹ�" << endl;
//	}
//	else
//		cout << "��1�β���ʧ��" << endl;
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
////pair���鴴��
//void test01()
//{
//	pair<string, int>p("Tom", 20);
//	cout << p.first << ": " << p.second <<endl;
//	pair<string, int>p2 = make_pair("Allen", 28);
//	cout << p2.first << ": " << p2.second <<endl;
//}
////set�ش������������������
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

//�Զ�����������ָ������

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
	Person p1("����", 25);
	Person p2("����", 15);
	Person p3("��Ȼ��", 29);
	Person p4("������", 5);
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
