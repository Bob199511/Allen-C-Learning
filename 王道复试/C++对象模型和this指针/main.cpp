#include <iostream>

using namespace std;
//thisָ�룺������Ƴ�ͻ�����ض�������*this
class Person{
public:
    Person(int age){
        this->age = age;//thisָ��ָ����Ǳ����õĳ�Ա����p1��������
    }

    Person& PersonADDage(Person &p){
        this->age += p.age;//thisָ��P2��ָ�룬*thisΪP2
        return *this;
    }

    int age;
};
void test01(){
   Person p1(18);
   cout << "p1������Ϊ" << p1.age << endl;
}
void test02(){
    Person P1(10);

    Person P2(10);
    P2.PersonADDage(P1).PersonADDage(P1).PersonADDage(P1);
    //cout << "p2������Ϊ" << P2.age << endl;//������Ϊ20
    cout << "p2������Ϊ" << P2.age << endl;//������Ϊ20
    //����Person��ʽ�����Ϊ20����Ϊ���ֵ�P2�Ŀ���
    //Person& ��ʽ���ص���P2�������Ϊ40

}
int main()
{
    //test01();
    test02();
    return 0;
}
