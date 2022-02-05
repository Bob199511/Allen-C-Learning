#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>
#include <cstring>
class Point{

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
};

#endif // HEAD_H_INCLUDED
