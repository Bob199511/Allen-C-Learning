#include<iostream>
using namespace std;
//继承中构造和析构的顺序
class Base{ //公共页面类
public:
    Base(){
        cout << "BASE的构造函数" << endl;
    }
    ~Base(){
        cout << "BASE的析构函数" << endl;
    }
    int m_a;
protected:
    int m_b;
private:
    int m_p;
};
class son1 : public Base{
public:
    son1(){
        cout << "son1的构造函数" << endl;
    }
    ~son1(){
        cout << "son1的析构函数" << endl;
    }
    void func(){
        m_a = 10;//父类公共权限可访问  ，仍未公共权限
        m_b = 10; //父类保护权限可访问 ，仍为保护权限
        //m_c = 10;  无法访问，未继承到
    }
    int m_d;
};
void test01(){
    son1 s1;

}
int main()
{
    test01();
    return 0;
}
