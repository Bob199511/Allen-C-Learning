#include <stdio.h>
#include <stdbool.h>

/*��ӡ���в�����256����ƽ�����жԳ����ʵ�������2��11����������������Ϊ2*2=4��11*11=121��

bool IsBalance(int x){
    int tmp[10];
    int i = 0;
    for(i = 0; i < 10; i++)
        tmp[i] = 0;
    i = 0;
    while(x != 0){
        tmp[i++] = x % 10;
        x /= 10;
    }
    int start = 0, end = i - 1;
    for(; start < end; ++start, --end){
        if(tmp[start] != tmp[end])
            break;
    }
    if(start >= end)
        return true;
    else
        return false;
}

int main(){
    for(int i = 0; i < 256; ++i){
        if(IsBalance(i * i))
            printf("%d\n", i);
    }

    return 0;
}
////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>

int reverse(int x){
    int ret = 0;
    while(x != 0){
       ret *= 10;
       ret += x % 10;
       x /= 10;
    }
    return ret;
}

int main(){
    for(int i = 0; i < 256; ++i){
        if(i * i == reverse(i * i))//�ж�i*i�Ƿ�����䷭ת�����
            printf("%d\n", i);
    }

    return 0;
}*/
