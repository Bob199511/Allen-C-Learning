#include <iostream>

using namespace std;
//�̳з�ʽ�������̳У������̳У�˽�м̳�
class Base1{ //����ҳ����
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
        m_a = 10;//���๫��Ȩ�޿ɷ���  ����δ����Ȩ��
        m_b = 10; //���ౣ��Ȩ�޿ɷ��� ����Ϊ����Ȩ��
        //m_c = 10;  �޷����ʣ�δ�̳е�
    }
};
class son2 : protected Base1{
public:
    void func(){
        m_a = 10;//���๫��Ȩ�޿ɷ��ʣ�Ϊ����Ȩ��
        m_b = 10; //���ౣ��Ȩ�޿ɷ��ʣ���Ϊ����Ȩ��
        //m_c = 10;  �޷����ʣ�δ�̳е�
    }
};
class son3 : private Base1{
public:
    void pp(){
        cout << m_a << endl;
    }
    son3(){
        m_a = 10;//���๫��Ȩ�޿ɷ��ʣ�Ϊ˽��Ȩ��
        m_b = 10; //���ౣ��Ȩ�޿ɷ��ʣ�Ϊ˽��Ȩ��
        //m_c = 10;  �޷����ʣ�δ�̳е�
    }
};
class grandson : public son3{
public:
    void fun(){
       //���ʲ��������е�˽������ m_a = 1000;
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
