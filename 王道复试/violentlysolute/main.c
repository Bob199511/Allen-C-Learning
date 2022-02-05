#include <stdio.h>

//设a、b、c均是0到9之间的数字，abc、bcc是两个三位数，且有：abc+bcc=532。求满足条件的所有a、b、c的值。

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


//设N是一个四位数，它的9倍恰好是其反序数（例如：1234的反序数是4321）
求N的值
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
