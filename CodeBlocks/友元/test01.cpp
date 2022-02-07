#include <iostream>
#include <cstring>
using namespace std;
//让成员函数做友元
class Building;
class goodgay{
public:
    goodgay();
    void visit();//让参观函数可以访问Building中的私有成员
    void visit2();//让参观函数不可以访问Building中的私有成员
    Building *building;
};

class Building{
    friend void goodgay::visit();
    //goodgay下的visit()函数是本类的好朋友，
    //可以访问这个类的私有成员，visit2()不能访问
public:
    Building();//***无参构造函数
public:
    string m_sittingRoom;

private:
    string m_BedRoom;
};
//类外写成员函数
goodgay::goodgay(){
    //创建建筑物对象
    building = new Building;//在堆区创建Building类对象

}
void goodgay::visit(){
    cout << "visit 函数正在访问：" << building->m_sittingRoom << endl;
    cout << "visit 函数正在访问：" << building->m_BedRoom << endl;
}
void goodgay::visit2(){
    cout << "visit2 函数正在访问：" << building->m_sittingRoom << endl;
}
Building::Building(){
    m_sittingRoom = "客厅";
    m_BedRoom = "卧室";
    }

void test01(){
    goodgay gg;
    gg.visit();
    gg.visit2();

}
int main()
{
    test01();
    return 0;
}
