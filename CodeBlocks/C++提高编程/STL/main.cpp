#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//vector����������õ���������
void myPrint(int val){
    cout << val << endl;
}
void test01(){
    vector<int> v;//������һ��vector���������Կ���Ϊ����
    v.push_back(10);//β������
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //ͨ����������������������
//    vector<int>::iterator itBegin = v.begin();//��ʼ������ ָ�������е�һ��Ԫ��
//    vector<int>::iterator itEnd = v.end();//������������ָ�����һ��Ԫ�ص���һ��λ�ã�������
//
//    //��һ�ֱ���
//    while(itBegin != itEnd){
//        cout << *itBegin << endl;
//        itBegin++;
//    }
//�ڶ��ֱ���
//    for(vector<int>::iterator it = v.begin(); it !=v.end(); ++it) {
//
//        cout << *it <<endl;
//    }
//�����ֱ�����ʽ ����STL���б���

    for_each(v.begin(),v.end(),myPrint);
}
int main()
{
    test01();
    return 0;
}
