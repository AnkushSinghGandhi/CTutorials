#include<stdio.h>
int main()
{
    
    int year, defaultyear=2001, leap_year, remaining_year, total_days, day;

    printf("Enter the year: ");
    scanf("%d", &year);

    year = (year-1)-defaultyear; 


    leap_year = year/4;

    remaining_year = year - leap_year;

    total_days = (remaining_year*365) + (leap_year*366) + 1;

  
    day = total_days%7;

    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
            printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
    return 0;
}