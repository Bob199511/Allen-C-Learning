#include <iostream>
#include<vector>
using namespace std;
//vector��������
void printVector(vector<int>&v)
{
	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
}
//void test01()
//{
//	vector<int>v1;
//	for(int i = 0; i < 10; ++i){
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//
//	//ͨ�����䷽ʽ����
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n��elem��ʽ����
//	vector<int>v3(10, 100);
//	printVector(v3);
//
//	//��������
//	vector<int>v4(v3);
//	printVector(v4);
//
//
//}

//vector��ֵ����
//void test01()
//{
//	 vector<int>v1;
//	 for(int i = 0; i < 10; ++i){
//		v1.push_back(i);
//	 }
//	 printVector(v1);
//
//	 //��ֵ operator=,assign,n��elem��ʽ
//	 vector<int>v2 = v1;
//	 printVector(v2);
//	 vector<int>v3;
//	 v3.assign(v1.begin(), v1.end());
//	 printVector(v3);
//	 vector<int>v4;
//	 v4.assign(10, 100);
//	 printVector(v4);
//}

//Vector���������ʹ�С
//void test01()
//{

//vector�����Ĳ����ɾ��,push_back. pop_back, insert, erase, clear
//void test01()
//{
//	vector<int>v1;
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//
//	v1.pop_back();
//	printVector(v1);
//	v1.insert(v1.begin(), 100) ;//��һ�������ǵ�����
//	printVector(v1);
//	v1.insert(v1.begin(), 1000);
//	printVector(v1);
//	v1.erase(v1.begin());
//	printVector(v1);
//	v1.erase(v1.begin(), v1.end());
//	printVector(v1);
//	v1.clear();
//	printVector(v1);
//}
//	vector<int>v1;
//	for(int i = 0; i < 10; ++i){
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if(v1.empty())//Ϊ�� ��������Ϊ��
//	{
//		cout << "v1Ϊ�գ�" << endl;
//	}
//	else{
//		cout << "v1��Ϊ�գ�" << endl;
//		cout << "v1����Ϊ��" << v1.capacity() << endl;
//		cout << "v1��СΪ��" << v1.size() << endl;
//	}
//	//����ָ����С
//	v1.resize(15); //Ĭ����0����µ�λ�ã���������Ĭ�����Ϊ0
//	printVector(v1);
//	v1.resize(20, -1);//�������ذ汾��������Ԫ���滻
//	printVector(v1);
//	v1.resize(10); //�������ָ���ı�ԭ���̣������Ĳ��ֻ� ɾ����
//	printVector(v1);
//}

////vector�������� -ʵ������������Ԫ�ػ���
//void test01()
//{	//����ʹ��
////	vector<int>v1;
////	for (int i = 0; i < 10 ; ++i){
////		v1.push_back(i);
////	}
////	printVector(v1);
////	vector<int>v2;
////	for(int i = 10; i > 0; --i){
////		v2.push_back(i);
////	}
////	printVector(v2);
////	v1.swap(v2);
////	printVector(v1);
////	printVector(v2);
////	//ʵ����; �����������ڴ�ռ�
//	vector<int>v;
//	for(int i = 0; i < 100000; ++i){
//		v.push_back(i);
//	}
//	cout << "v������" << v.capacity() << endl;
//	cout << "v�Ĵ�С" << v.size() << endl;
//	v.resize(3);//����ָ����С
//
//	vector<int>(v).swap(v); //��һ��(v)Ϊ�������󣨱�������ɺ��Զ����л��գ����µĶ��󣬰��յڶ���v���г�ʼ������С������Ϊ�ڶ���v��
//	cout << "v������" << v.capacity() << endl;
//	cout << "v�Ĵ�С" << v.size() << endl;
//
//}

//vector����Ԥ���ռ�
void test01(){
	vector<int>v;

	v.reserve(100000);
	int num = 0;
	int *p = NULL;
	for(int i = 0; i < 1e6; ++i){
		v.push_back(i);
		if(p != &v[0]){
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}
int main()
{
    test01();
    return 0;
}
