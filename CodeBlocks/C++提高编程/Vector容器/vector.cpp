#include <iostream>
#include<vector>
using namespace std;
//vector函数构造
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
//	//通过区间方式构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n个elem方式构造
//	vector<int>v3(10, 100);
//	printVector(v3);
//
//	//拷贝构造
//	vector<int>v4(v3);
//	printVector(v4);
//
//
//}

//vector赋值操作
//void test01()
//{
//	 vector<int>v1;
//	 for(int i = 0; i < 10; ++i){
//		v1.push_back(i);
//	 }
//	 printVector(v1);
//
//	 //赋值 operator=,assign,n个elem方式
//	 vector<int>v2 = v1;
//	 printVector(v2);
//	 vector<int>v3;
//	 v3.assign(v1.begin(), v1.end());
//	 printVector(v3);
//	 vector<int>v4;
//	 v4.assign(10, 100);
//	 printVector(v4);
//}

//Vector容器容量和大小
//void test01()
//{

//vector容器的插入和删除,push_back. pop_back, insert, erase, clear
//void test01()
//{
//	vector<int>v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//
//	v1.pop_back();
//	printVector(v1);
//	v1.insert(v1.begin(), 100) ;//第一个参数是迭代器
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
//	if(v1.empty())//为真 代表容器为空
//	{
//		cout << "v1为空！" << endl;
//	}
//	else{
//		cout << "v1不为空！" << endl;
//		cout << "v1容量为：" << v1.capacity() << endl;
//		cout << "v1大小为：" << v1.size() << endl;
//	}
//	//重新指定大小
//	v1.resize(15); //默认用0填充新的位置，两个参数默认情况为0
//	printVector(v1);
//	v1.resize(20, -1);//利用重载版本，可以用元素替换
//	printVector(v1);
//	v1.resize(10); //如果重新指定的比原来短，超出的部分会 删除掉
//	printVector(v1);
//}

////vector互换容器 -实现两个容器内元素互换
//void test01()
//{	//基本使用
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
////	//实际用途 ；可以收缩内存空间
//	vector<int>v;
//	for(int i = 0; i < 100000; ++i){
//		v.push_back(i);
//	}
//	cout << "v的容量" << v.capacity() << endl;
//	cout << "v的大小" << v.size() << endl;
//	v.resize(3);//重新指定大小
//
//	vector<int>(v).swap(v); //第一个(v)为匿名对象（编译器完成后自动进行回收），新的对象，按照第二个v进行初始化，大小和容量为第二个v的
//	cout << "v的容量" << v.capacity() << endl;
//	cout << "v的大小" << v.size() << endl;
//
//}

//vector容器预留空间
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
