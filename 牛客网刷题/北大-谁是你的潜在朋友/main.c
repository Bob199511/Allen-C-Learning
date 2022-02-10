#include <stdio.h>
#include <stdlib.h>

int main(){
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    int* a = (int *)malloc(N * sizeof(int));
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < N; i++){
        int count = 0;
        for(int j = 0; j < N; j++){
            if(i == j);
            else{
                if(a[i] == a[j])
                    count++;
            }
        }
        if(count == 0)
            printf("BeiJu\n");
        else
            printf("%d\n", count);
    }

    return 0;
}
