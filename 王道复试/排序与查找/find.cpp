#include<iostream>
#include<algorithm>
using namespace std;
//先排序再二分查找
void Bfind(int *arr, int N, int value){
    int left = 0, right = N - 1;
    while(left < right){
        int mid = (left + right) / 2;
        if(arr[mid] == value){
            cout << "YES" << endl;
            break;
        }
        else if(arr[mid] > value){
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    if(right < left)
        cout << "NO" << endl;
}
int main(){
    int N;
    while(cin >> N){
        int arr[N] = {0};
        for(int i = 0; i < N; ++i){
            cin >> arr[i];
        }
        int M;
        cin >> M;
        int b[M];
        for(int i = 0; i < M; ++i){
            cin >> b[i];
        }
        sort(arr, arr + N);
        sort(b, b + M);
        for(int i = 0; i < M; i++){
            Bfind(arr, b[i], N);
        }

    }
    return 0;
}




/*
#include<iostream>
#include<algorithm>
using namespace std;
//遍历查找时间复杂度O（N*M）
int main(){
    int N;
    while(cin >> N){
        int arr[N];
        for(int i = 0; i < N; ++i){
            cin >> arr[i];
        }
        int M;
        cin >> M;
        int b[M];
        for(int i = 0; i < M; ++i){
            cin >> b[i];
        }
        for(int j = 0, flag = -1; j < M; ++j, flag = -1){
            for(int i = 0; i < N; ++i){
                if(b[j] == arr[i]){
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == -1)
                cout << "NO" <<endl;
        }
    }
    return 0;
}  */

/*#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N;
    while(cin >> N){
        int arr[N];
        for(int i = 0; i < N; ++i){
            cin >> arr[i];
        }
        int value;
        cin >> value;
        int flag = -1;
        for(int i = 0; i < N; ++i){
            if(value == arr[i]){
                flag = i;
                break;
            }
        }
        cout << flag << endl;
    }
    return 0;
} */
