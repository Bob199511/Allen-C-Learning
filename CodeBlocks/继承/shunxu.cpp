#include<iostream>
using namespace std;
//�̳��й����������˳��
class Base{ //����ҳ����
public:
    Base(){
        cout << "BASE�Ĺ��캯��" << endl;
    }
    ~Base(){
        cout << "BASE����������" << endl;
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
        cout << "son1�Ĺ��캯��" << endl;
    }
    ~son1(){
        cout << "son1����������" << endl;
    }
    void func(){
        m_a = 10;//���๫��Ȩ�޿ɷ���  ����δ����Ȩ��
        m_b = 10; //���ౣ��Ȩ�޿ɷ��� ����Ϊ����Ȩ��
        //m_c = 10;  �޷����ʣ�δ�̳е�
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
