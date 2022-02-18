#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//vector容器存放自定义数据类型
class Person{
public:
    Person(string name, int age){
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};

void test01(){
    vector<Person>v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("cca", 30);
    Person p4("ddd", 40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    for(vector<Person>::iterator it = v.begin(); it != v.end(); ++it){
        cout << "姓名：" << (*it).m_name << "年龄：" << (*it).m_age;
    }

}
//存放自定义数据类型的指针
void test02(){
    vector<Person*>v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("cca", 30);
    Person p4("ddd", 40);
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    for(vector<Person*>::iterator it = v.begin(); it != v.end(); ++it){
        cout << (*it)->m_name << "   " << (*it)->m_age << endl;
    }
}
int main()
{
    test02();
    return 0;
}
