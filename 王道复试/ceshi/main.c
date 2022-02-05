#include<stdio.h>
#include<string.h>

#define IsYear(year) (year % 400 == 0 || year % 100 != 0) && (year % 4) == 0 ? 1 : 0

void Show_day(int year, char* month, int day){
    int MonthNumber = 0;
    char months[13][10] = {"0", "January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
    int arr[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                      {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    char DayName[7][10] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for(int i = 0; strcmp(months[i], month) != 0;)
        MonthNumber = ++i;

    //计算总天数，//1990年1月1日是星期一
    for(int i = 1990; i < year; i++){
        if(IsYear(year))
            day += 366;
        else
            day += 365;
    }
    for(int flag = IsYear(year); MonthNumber > 0; --MonthNumber)
        day += arr[flag][MonthNumber - 1];//month1 - 1为完整的月份
    printf("%s\n", DayName[day % 7]);
}

int main(){
    int year = 0, day = 0;
    char month[10];
    while(scanf("%d %s %d", &day, month, &year) != EOF){
        Show_day(year, month, day);
    }
    return 0;
}
