#include<iostream>

using namespace std;
class Person{
public:
    void showclassname(){
        cout << "this is person class" << endl;
    }
    void showpersonage(){
        if(this == NULL)
            return;
        cout << "age +" << m_age << endl;
    }
    int m_age;
};
void test01(){
    Person* p1 = NULL;
    p1->showclassname();
    p1->showpersonage();//��ָ���޷����ʳ�Ա//m_age�൱��this->m_age;
}
int main(){

    return 0;
}
