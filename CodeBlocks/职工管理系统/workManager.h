#ifndef WORKMANAGER_H_INCLUDED //��ֹͷ�ļ��ظ�����
#define WORKMANAGER_H_INCLUDED//�������������ͷ�ļ�
#include<iostream>
#include<string>
#include"Worker.h"
#include"manager.h"
#include"employee.h"
#include"boss.h"
using namespace std;//ʹ�ñ�׼�����ռ�

class WorkManager{
public:
    WorkManager(); //���캯��
    void Show_Menu();//չʾ�˵�

    void ExitSystem();//�˳�ϵͳ

    //��¼ְ������
    int m_EmpNum;

    //ְ������ָ��
    Worker ** m_EmpArray;

    //���ְ��
    void Add_Emp();



    ~WorkManager(); //��������
};
#endif // WORKMANAGER_H_INCLUDED
