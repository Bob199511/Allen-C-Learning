#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
////�������󣨷º���
//class myAdd
//{
//public:
//	int operator()(int v1, int v2){
//		return v1 + v2;
//	}
//};
//class myPrint
//{
//public:
//	myPrint(){
//		this->m_count = 0;
//	}
//	void operator()(string test){
//		cout << test << endl;
//		this->m_count++;
//	}
//	int m_count;
//};
////����������Ϊ��������
//void doPrint(myPrint &mp, string test)
//{
//	mp(test);
//}
//void test01()
//{
//	myAdd MA;
//	cout << MA(10, 10) << endl;
//	myPrint MP;
//	MP("hello world!");
//	cout << "myPrint���ô���Ϊ" << MP.m_count << endl;
//	myPrint mp;
//	doPrint(mp, "hello c++");
//
//}

////ν�ʣ�һԪν�ʡ����º�������ֵ������bool����
//class greaterFive
//{
//public:
//	bool operator()(int value){
//		return value > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for(int i = 0; i < 10; i++){
//		v.push_back(i);
//	}
//	//���������д���5������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterFive());
//	if(it == v.end())
//		cout << "found" << endl;
//	else
//		cout << "not find" << endl;
//
//}

////��Ԫν��
//class myCmp
//{
//public:
//	bool operator()(int v1, int v2){
//		return v1 > v2;
//	}
//
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(90);
//	v.push_back(18);
//	v.push_back(22);
//	v.push_back(8);
//
//	sort(v.begin(), v.end());
//	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
//		cout << *it << " ";
//	}
//	cout << endl;
//	//ʹ�ú������󣬸ı��㷨���ԣ���Ϊ�Ӵ�С
//	sort(v.begin(), v.end(), myCmp());
//	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
//		cout << *it << " ";
//	}
//	cout << endl;
//}

////�����º���
//void test01()
//{
//	 negate<int>n;
//	 cout << n(50) << endl;
//
//	 plus<int>p;
//	 cout << p(20, 20) << endl;
//}

////��ϵ�º���
////���� greater, ,greater_equal, equal_to
//class myCmp
//{
//	bool operator()(int v1, int v2){
//		return v1 > v2;
//	}
//
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(16);
//	v.push_back(12);
//	v.push_back(13);
//	v.push_back(10);
//	//sort(v.begin(), v.end(), myCmp);
//	sort(v.begin(), v.end(), greater<int>());
//	for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//�߼��º���
void test01()
{
	logical_not<int>n;
	cout << n(0) << endl;
	logical_not<bool>n_b;
	cout << n_b(true) << endl;
}
int main()
{
    test01();
    return 0;
}
