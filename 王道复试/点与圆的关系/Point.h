#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>

class Point{

public:
    void setx(int x);
    int getx();
    void sety(int y);
    int gety();

private:
    int m_x;
    int m_y;
};


#endif // POINT_H_INCLUDED
