#include<iostream>
using namespace std;
class myinteger{
    friend ostream& operator<<(ostream& cout, myinteger myint);
public:
    myinteger(){
    m_num = 0;
    }
    //重载前置++运算符
    myinteger& operator++(){//返回值则不会多次改变实参的值
//（只会有一次运算，接下来返回的是其数据的拷贝），返回引用则不会
        m_num++;
        return *this;
    }
    //后置递增,不加引用  因为返回的是局部变量
    myinteger operator++(int){//加int避免命名冲突，实现重载
    //先返回当时结果，后进行递增操作，最后将记录结果返回
    myinteger temp = *this;
    m_num++;
    return temp;
    }
private:
    int m_num;
};
//重载左移运算符
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
