#include<iostream>
using namespace std;
//���麯�� virtual ����ֵ���� ������ �������б� = 0��
class Base{
public:
    virtual void func() = 0;//����һ�����麯����������Ϊ������
    //�ص㣺1.�޷�ʵ��������
    //2.����������࣬����Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
};
class Son: public Base{
public:
    virtual void func(){ //������д�����еĴ��麯��������ʵ��������
    }
};
void test01(){

    Son s1;//����ʵ����
    //Base b;
    //new Base;
}
int main(){

    return 0;
}
