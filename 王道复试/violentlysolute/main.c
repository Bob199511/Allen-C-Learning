#include <stdio.h>

//��a��b��c����0��9֮������֣�abc��bcc��������λ�������У�abc+bcc=532������������������a��b��c��ֵ��

int main(){
    int a = 0, b = 0, c = 0;
    for(a = 1; a <= 5; a++)
        for(b = 1; a + b <= 5 ; ++b)
            for(c = 0; c <= 9; c++){
                if((a + b) * 100 + (b + c) * 10 + 2 * c ==532)
                    printf("%d %d %d\n", a, b, c);
            }
    return 0;
}


//��N��һ����λ��������9��ǡ�����䷴���������磺1234�ķ�������4321��
��N��ֵ
#include <stdio.h>

int reverse(int x){
   int num = 0;
   while(x != 0) {
       num *= 10;
       num += x % 10;
        x /= 10;
   }
    return num;
}
int main(void){
    for(int a = 1000; a <= 9999; ++a){
        int b = reverse(a);
        if(9 * a == b){
            printf("%d\n", a );
        }
    }
    return 0;
}
