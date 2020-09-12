#include<stdio.h>
int main()
{
int a,b,c;
printf("enter amount");
scanf("%d",&a);
b=a/100;
c=a%100;
b=b+c/50;
c=c%50;
b=b+c/10;
c=c%10;
b=b+c/5;
c=c%5;
b=b+c/2;
c=c%2;
b=b+c/1;
printf(" number of notes is: %d",b);
}