#include "Point.h"
using namespace std;

/*class Point{

public:
    void setx(int x){
        m_x = x;
    }
    int getx(){
        return m_x;
    }
    void sety(int y){
        m_y = y;
    }
    int gety(){
        return m_y;
    }
private:
    int m_x;
    int m_y;
};*/
////////////////////////////////////

class Circle{

 public:
     void setR(int R){
        m_R = R;
     }
     int getR(){
        return m_R;
     }
     void setPoint(Point x){
        m_center = x;
     }
     Point getPoint(){
        return m_center;
     }
private:
    int m_R;
    Point m_center;//圆心,在类中可以包含另一个类
};

void IsInCircle(Circle &c, Point &p){
    //两点间距离的平方和半径的平方比较
    int distance = (c.getPoint().getx() - p.getx()) * (c.getPoint().getx() - p.getx())
    + (c.getPoint().gety() - p.gety()) * (c.getPoint().gety() - p.gety());
    int rdistance = c.getR() * c.getR();
    if(distance < rdistance)
        cout << "点在圆内" << endl;
    else if(distance > rdistance)
        cout << "点在圆外" << endl;
    else
        cout << "点在圆上" << endl;
}

int main()
{
    Circle c;
    c.setR(10);
    Point center;
    center.setx(10);
    center.sety(0);
    c.setPoint(center);
    Point p;
    p.setx(10);
    p.sety(9);
    IsInCircle(c, p);


    system("pause");
    return 0;
}
