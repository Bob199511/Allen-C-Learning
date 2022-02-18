#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person;

template<class T1, class T2>
void printPerson2(Person<T1, T2> p);

template<class T1, class T2>
class Person{
    friend void printPerson(Person<T1, T2> p){
        cout << "������"<<p.m_name << endl << "����" << p.m_age <<endl;
    }
    friend void printPerson2<>(Person<T1, T2> p);//��Ԫ��������ʵ�����<>
public:
    Person(T1 name, T2 age){
        m_age = age;
        m_name = name;
    }
private:
    T2 m_age;
    T1 m_name;
};
template<class T1, class T2>
void printPerson2(Person<T1, T2> p){
        cout << "������"<< p.m_name << endl << "����" << p.m_age <<endl;
    }

void test01(){

    Person<string, int>p("Tom", 20);
    printPerson2(p);
}
int main(){
    test01();
    return 0;
}
