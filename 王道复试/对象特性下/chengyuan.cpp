#include<iostream>
using namespace std;

class Phone{
public:
    Phone(string pName):m_PName(pName){
    }
    string m_PName;
};
class Person{
public:

    Person(string name,string pName):m_name(name), m_Phone(pName){
    }//Phone m_Phone = pName;隐式转换法和手机类中字符串相同

    string m_name;
    Phone m_Phone;
};
void test01(){
    Person p("张三", "苹果MAX");
    cout << p.m_name << "拿着" << p.m_Phone.m_PName << endl;
}
int main(){
    test01();
    return 0;
}
