#-------------------------------------------------
#
# Project created by QtCreator 2022-02-15T09:13:23
#
#-------------------------------------------------

QT       += core gui #QT包含的模�?

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets #大于4版本以上包含widget模块

TARGET = Firstday #目标 生成exe程序的名称，更改后不会删除原名称的exe文件
TEMPLATE = app #模板 应用程序模板


SOURCES += main.cpp\ #源文�?
        mywidget.cpp \
    mypushbutton.cpp

HEADERS  += mywidget.h \ # 头文�?
    mypushbutton.h
