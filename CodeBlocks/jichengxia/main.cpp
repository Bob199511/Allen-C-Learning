#include <iostream>

using namespace std;
 //������
 class animal{
 public:
    int m_age;
 };
 //������̳п��Խ�����μ̳е�����,�̳�֮ǰ�ӹؼ���virtual
 class sheep :virtual public animal{};//�̳�֮ǰ�ӹؼ���virtual,animal��������

 class tuo :virtual public animal{};

 class sheeptuo:public sheep, public tuo{};
 void test01(){
    sheeptuo st;

    st.sheep::m_age = 18;
    st.tuo::m_age = 30;
//�����μ̳У�������������ͬ���ݣ���Ҫ������������
    cout << "st.sheep::m_age = " << st.sheep::m_age << endl;
    cout << "st.tuo::m_age = " << st.tuo::m_age << endl;
    cout << st.m_age << endl;
//ֻҪ��һ�ݾͿ��ԡ����μ̳е������������ݣ���Դ�˷�
 }
int main()
{
    test01();
    return 0;
}
