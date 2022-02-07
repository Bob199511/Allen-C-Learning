#include <iostream>
#include<algorithm>
using namespace std;
//--运算符冲重载
class myinteger{
public:
    myinteger(){
        myint = 10;
        m_a = 10;
    }
    //前置--
    myinteger operator--(){
        --myint;
        --m_a;
        return *this;
    }
    //后置--
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
    cout << (my_int--)-- << endl;//输出结果为10,10
    //一次后置自减操作后返回了拷贝，拷贝变量进行了后置减减
    cout << my_int << endl;//输出结果为9，9
    cout << my_int << endl;//输出结果为9，9
}
int main()
{
    test02();
    return 0;
}
