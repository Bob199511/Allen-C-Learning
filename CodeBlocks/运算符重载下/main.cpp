#include <iostream>
#include<algorithm>
using namespace std;
//--�����������
class myinteger{
public:
    myinteger(){
        myint = 10;
        m_a = 10;
    }
    //ǰ��--
    myinteger operator--(){
        --myint;
        --m_a;
        return *this;
    }
    //����--
    myinteger operator--(int){
        myinteger temp = *this;
        myint--;
        m_a--;
        return temp;
    }
    int myint;
    int m_a;
};
ostream& operator<<(ostream &cout, myinteger p){
        cout << p.myint << p.m_a << endl;
        return cout;
    }
void test01(){
    myinteger my_int;

    cout << --(--my_int) << endl;
    cout << my_int << endl;
}
void test02(){
    myinteger my_int;
    cout << (my_int--)-- << endl;//������Ϊ10,10
    //һ�κ����Լ������󷵻��˿������������������˺��ü���
    cout << my_int << endl;//������Ϊ9��9
    cout << my_int << endl;//������Ϊ9��9
}
int main()
{
    test02();
    return 0;
}
