#include <iostream>
using namespace std;
//���캯���ķ��༰���ã��޲Һ��вι���;��ͨ���캯���Ϳ������캯��
class Person{
public:
    Person(){
        cout << "�޲ι��캯���ĵ���" << endl;
    }
    Person(int a){
        age = a;
        cout << "�вι��캯���ĵ���" << endl;
    }
    //�������캯��,����һ��p,���Ʋ��������޸�p
    Person(const Person &p){
        age = p.age;//��������������������Կ�����������
        cout << "�������캯���ĵ���" << endl;
    }
    ~Person(){
        cout << "���������ĵ���" << endl;
    }
    int age;

};
//���ã���ʽת����
void test01(){
    Person p1;
    Person p2 = Person(10);//�вι���
    Person p3 = Person(p2);//��������
    Person p4 = 10;//�൱��Person p4 = Person(10)�����вι���
    Person p5 = p4;//�ȼ���Person p5 = Person(p4)������������
}
int main()
{
    test01();
    system("pause");

    return 0;
}
