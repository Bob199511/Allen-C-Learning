#include <iostream>

using namespace std;
/*
class Java{
public:
    void header(){
        cout << "公开课等等" << endl;
    }
    void footer(){
        cout << "合作商等等" << endl;
    }
    void left(){
        cout << "学科分类" << endl;
    }
    void content(){
        cout << "java具体内容特色等等" << endl;
    }
};
class CPP{
public:
    void header(){
        cout << "公开课等等" << endl;
    }
    void footer(){
        cout << "合作商等等" << endl;
    }
    void left(){
        cout << "学科分类" << endl;
    }
    void content(){
        cout << "CPP具体内容特色等等" << endl;
    }
}; */
//继承实现页面 ,减少重复代码
class BasePage{ //公共页面类
public:
    void header(){
        cout << "公开课等等" << endl;
    }
    void footer(){
        cout << "合作商等等" << endl;
    }
    void left(){
        cout << "学科分类" << endl;
    }
};
class Java : public BasePage{
public:
    void content(){
        cout << "java具体内容特色等等" << endl;
    }
};
class CPP : public BasePage{
public:
    void content(){
        cout << "CPP具体内容特色等等" << endl;
    }
};
void test01(){
    Java j;
    j.header();
    j.footer();
    j.left();
    j.content();
    cout << "-------------" << endl;
    CPP c;
    c.header();
    c.footer();
    c.left();
    c.content();


}
int main()
{
    test01();
    return 0;
}
