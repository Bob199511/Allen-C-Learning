#include"workManager.h"
#include<iostream>
using namespace std;
#include"Worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"


int main(){
    //���Դ���
    Worker * worker = NULL;
    worker = new Employee(1, "����", 1);
    worker->showInfo();
    WorkManager wm;
    int choice = 0;//�洢�ú�ѡ��
        while(true){

        wm.Show_Menu();

        cout << "����������ѡ�� " << endl;
        cin >> choice;

        switch (choice){

        case 0:
            wm.ExitSystem();   //�˳�ϵͳ
            break;
        case 1:   //����ְ��
            break;
        case 2:   //��ʾְ��
            break;
        case 3:   //ɾ��ְ��
            break;
        case 4:   //�޸�ְ��
            break;
        case 5:   //����ְ��
            break;
        case 6:   //���������
            break;
        case 7:   //����ĵ�
            break;

        }

    }


    return 0;
}
