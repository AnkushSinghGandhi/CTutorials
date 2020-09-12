#include<stdio.h>
int main(){
    int s, a, b, c, area;
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf ("%d",area)