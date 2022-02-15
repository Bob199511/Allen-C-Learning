#include "mywidget.h"
#include <QApplication>//包含一个应用程序的头文件

//程序的入口 argc命令行变量的数量，argv[]命令行变量的数组
int main(int argc, char *argv[])
{
    //a应用程序对象，在Qt中应用程序对象有且只有一个
    QApplication a(argc, argv);
    //窗口对象 mywidget父类->Qwidget
    myWidget w;
    //窗口对象 默认不会显示 必须要用show方法显示
    w.show();

    //让应用程序对象进入消息循环
    //当代吗阻塞到这行
    return a.exec();

//    while(true){
//        if(){

//            break;
//        }
//    }
}
