#include <iostream>

using namespace std;
//全局函数做友元
class Building{
    //此函数可以访问此类中的私有内容
    friend void goodGay(Building &building);

public:
    Building(){
        m_sittingRoom = "客厅";
        m_BedRoom = "卧室";
        }
public:
    string m_sittingRoom;

private:
    string m_BedRoom;
};
//全局函数
void goodGay(Building &building){
    cout << "全局函数在访问" << building.m_sittingRoom << endl;
    cout << "全局函数在访问" << building.m_BedRoom << endl;
}
void test01(){
    Building building;
    goodGay(building);

}
int main()
{
    test01();
    return 0;
}
