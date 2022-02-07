#include <iostream>

using namespace std;
//继承方式，公共继承，保护继承，私有继承
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
};
class son2 : protected Base1{
public:
    void func(){
        m_a = 10;//父类公共权限可访问，为保护权限
        m_b = 10; //父类保护权限可访问，仍为保护权限
        //m_c = 10;  无法访问，未继承到
    }
};
class son3 : private Base1{
public:
    void pp(){
        cout << m_a << endl;
    }
    son3(){
        m_a = 10;//父类公共权限可访问，为私有权限
        m_b = 10; //父类保护权限可访问，为私有权限
        //m_c = 10;  无法访问，未继承到
    }
};
class grandson : public son3{
public:
    void fun(){
       //访问不到父类中的私有内容 m_a = 1000;
    }
};
void test01(){
    son3 s3;
    s3.pp();

}
int main()
{
    test01();
    return 0;
}
