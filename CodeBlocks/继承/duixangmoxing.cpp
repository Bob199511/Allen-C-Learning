#include<iostream>
using namespace std;

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
