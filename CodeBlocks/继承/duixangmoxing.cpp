#include<iostream>
using namespace std;

class Base1{ //公共页面类
public:
    int m_a;
protected:
    int m_b;
private:
    int m_p;
};
class son1 : public Base1{
public:
    void func(){
        m_a = 10;//父类公共权限可访问  ，仍未公共权限
        m_b = 10; //父类保护权限可访问 ，仍为保护权限
        //m_c = 10;  无法访问，未继承到
    }
    int m_d;
};
void test01(){
    cout << "sizeof(son1) = " << sizeof(son1) << endl;

}
int main()
{
    test01();
    return 0;
}
