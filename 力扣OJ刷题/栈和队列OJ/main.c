#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//����ƥ������

//����ѭ��������������ʹ��ջ
/*bool isValid(char * s){
    if(s == NULL)
        return true;
    int i = 0;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ')'){
            int j = i;
            while(j > 0 && !s[--j]);//�����ַԽ��
            if(s[j] == '('){
                s[j] = 0;
                s[i] = 0;
            }
            else
                return false;
        }

        if(s[i] == ']'){
            int j = i;
            while(j > 0 && !s[--j]);
            if(s[j] == '['){
                s[j] = 0;
                s[i] = 0;
            }
            else
                return false;
        }
        if(s[i] == '}'){
            int j = i;
            while(j > 0 && !s[--j]);
            if(s[j] == '{'){
                s[j] = 0;
                s[i] = 0;
            }
            else
                return false;
        }
    }
    for(int j = 0; j < i; j++){
        if(s[j] != 0)
            return false;
    }
    return true;

}*/


/*//ʹ��ջ�������ƥ��
struct Stack{
    char *s;
    int top;
    int capacity;
};
void StackInit(struct Stack* ps){
    ps->s = (char*)malloc(100 * sizeof(char));
    ps->top = -1;
    ps->capacity = 100;
}

void StackPush(struct Stack* ps, char val){
    if(ps->top + 1 == ps->capacity){//�ж�ջ�ռ��Ƿ���
        ps->capacity *= 2;
        char* tmp = (char*)realloc(ps->s, ps->capacity);
        if(tmp != NULL)
            ps->s = tmp;
        else
            exit(-1);
    }
    ps->s[++(ps->top)] = val;
}
bool isValid(char * s){
    struct Stack St;
    StackInit(&St);
    char* p = s;
    for(;*p != '\0'; p++){
        if(*p == '(' || *p == '[' || *p == '{'){
            StackPush(&St, *p);
        }
        else{
            if(*p == ')'){
                if(St.top>-1 && St.s[St.top] == '(')
                    St.top--;
                else
                    return false;
            }
            if(*p == ']'){
                if(St.top>-1 && St.s[St.top] == '[')
                    St.top--;
                else
                    return false;
            }
            if(*p == '}'){
                if(St.top>-1 && St.s[St.top] == '{')
                    St.top--;
                else
                    return false;
            }
        }
    }
    if(St.top == -1)
        return true;
    else
        return false;

}*/
int main()
{
    printf("Hello world!\n");
    return 0;
}
