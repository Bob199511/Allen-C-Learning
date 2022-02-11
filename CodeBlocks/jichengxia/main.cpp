#include <iostream>

using namespace std;
 //动物类
 class animal{
 public:
    int m_age;
 };
 //利用虚继承可以解决菱形继承的问题,继承之前加关键字virtual
 class sheep :virtual public animal{};//继承之前加关键字virtual,animal类叫虚基类

 class tuo :virtual public animal{};

 class sheeptuo:public sheep, public tuo{};
 void test01(){
    sheeptuo st;

    st.sheep::m_age = 18;
    st.tuo::m_age = 30;
//当菱形继承，两个父类有相同数据，需要加作用域区分
    cout << "st.sheep::m_age = " << st.sheep::m_age << endl;
    cout << "st.tuo::m_age = " << st.tuo::m_age << endl;
    cout << st.m_age << endl;
//只要有一份就可以。菱形继承导致数据有两份，资源浪费
 }
int main()
{
    test01();
    return 0;
}
