#include<iostream>
using namespace std;
class myinteger{
    friend ostream& operator<<(ostream& cout, myinteger myint);
public:
    myinteger(){
    m_num = 0;
    }
    //����ǰ��++�����
    myinteger& operator++(){//����ֵ�򲻻��θı�ʵ�ε�ֵ
//��ֻ����һ�����㣬���������ص��������ݵĿ����������������򲻻�
        m_num++;
        return *this;
    }
    //���õ���,��������  ��Ϊ���ص��Ǿֲ�����
    myinteger operator++(int){//��int����������ͻ��ʵ������
    //�ȷ��ص�ʱ���������е�����������󽫼�¼�������
    myinteger temp = *this;
    m_num++;
    return temp;
    }
private:
    int m_num;
};
//�������������
ostream & operator<<(ostream & cout, myinteger myint){
    cout << myint.m_num;
    return cout;
}
void test01(){
    myinteger myint;
    cout << ++myint << endl;
}
void test02(){
    myinteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}
int main(){

    test02();
    return 0;
}
