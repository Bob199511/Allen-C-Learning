#include <iostream>

using namespace std;
class Person{
    friend ostream & operator<<(ostream &cout, Person p);
public:
    //������������� p.operator<<(cout),�򻯰汾p << cout
    //�������ó�Ա�����������������������Ϊ�޷�ʵ�� cout �����
    //void operator<<(){
    //}
    Person(int a, int b){
    m_a = a;
    m_b = b;
    }
private:
    int m_a;
    int m_b;
};
//ֻ����ȫ�ֺ����������������
ostream & operator<<(ostream &cout, Person p){//���� operator<<(cout, p),��cout << p;

    cout << "m_a = " << p.m_a << "m_b = " << p.m_b;
    return cout;

}
void test01(){
    Person p(10 , 10);
    cout << p << endl;//�������޵��ӣ�
    //ÿ����һ�η���cout��Ҳ������������β���
}


int main()
{
    test01();
    cout << "Hello world!" << endl;
    return 0;
}
