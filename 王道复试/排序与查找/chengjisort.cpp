 #include<iostream>
#include<algorithm>
using namespace std;
typedef struct rat{
    int weight;
    string hat_color;
}rat;
bool cmp(rat r1, rat r2){
    if(r1.weight >= r2.weight)
        return true;
    else
        return false;
}
int main(){
    int N;
    while(cin >> N){
        rat r[N];
    for(int i = 0; i < N; ++i){
        cin >> r[i].weight >> r[i].hat_color;
        }
    sort(r, r + N, cmp);
    for(int i = 0; i < N; ++i){
        cout << r[i].hat_color << endl;;
        }
    }
    return 0;
}


/*#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int i, int j){
    if(i % 2 == 1&&j % 2 == 1 && i >= j)
        return true;
    if(i % 2 == 1&&j % 2 == 0)
        return true;
    if(i % 2 == 0 && j % 2 ==0 && i <= j)
        return true;
    return false;


}
int arr[10];
int main(){
    while(cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >>
    arr[4] >> arr[5] >> arr[6] >> arr[7] >> arr[8] >> arr[9]){
        sort(arr, arr + 10, cmp);
        for(int i = 0; i < 10; ++i)
            printf("%d ", arr[i]);
        cout << endl;
    }
    return 0;
} */


/*#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N= 0;
    while(cin >> N){
        int arr[N];
        for(int i = 0;i < N; ++i)  {
            cin >> arr[i];
        }
        sort(arr, arr + N);
        cout << arr[N - 1] << endl;
        if(N - 1 == 0){
            cout << -1 << endl;
            continue;
        }
        for(int i = 0;i < N - 1; ++i)  {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}*/


/*#include <iostream>
#include <algorithm>
using namespace std;
//输入任意（用户，成绩）序列，可以获得成绩从高到低或从低到高的排列,相同成绩
//都按先录入排列在前的规则处理。
typedef struct student{
    string name;
    int score;
    int num;//记录输入先后
}student;
bool cmp0(student stu1 , student stu2){
    if(stu1.score > stu2.score || (stu1.num < stu2.num && stu1.score == stu2.score))
        return true;
    else
        return false;
}
bool cmp1(student stu1 , student stu2){
    if(stu1.score < stu2.score || (stu1.num < stu2.num && stu1.score == stu2.score))
        return true;
    else
        return false;
}
int main(){
    int N = 0 , flag = 0;
    while(scanf("%d", &N) != EOF && scanf("%d", &flag)){
        student stu[N];
        for(int i = 0; i < N; stu[i].num = i, ++i)
            cin >> stu[i].name >> stu[i].score;
        if(flag == 0)
            sort(stu, stu + N, cmp0);
        else
            sort(stu, stu + N, cmp1);
        for(int i = 0; i < N; ++i)
            cout << stu[i].name << " " << stu[i].score << endl;
    }
    return 0;
}*/


/*#include<iostream>
#include<algorithm>
//用一维数组存储学号和成绩，然后，按成绩排序输出。
//采用结构体进行比较
using namespace std;
typedef struct student{
   int id;
   int score;
}student;
bool comp(student stu1, student stu2){
    if(stu1.score > stu2.score)
        return false;
    else if(stu1.score < stu2.score)
        return true;
    else if(stu1.score == stu2.score && stu1.id < stu2.id)
        return true;
    else
        return false;

}
int main(){
    int N;
    cin >> N;
    student stu[N];
    for(int i = 0; i < N; ++i)
         cin >> stu[i].id >> stu[i].score;
    sort(stu, stu + N, comp);
    for(int i = 0; i < N; ++i)
         cout << stu[i].id << " " << stu[i].score << endl;
    return 0;
}*/
