#include<stdio.h>
int main()
{
    int n, num;

    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    if(num<0)
    {

         num = (-1)*num;
    }
}