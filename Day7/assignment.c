#include<stdio.h>
int main(){
	int a;
	int b,c,d,e,f,total;
	scanf("%d",&a);
	b=a%10;
	c=(a/10);
    c=c%10;
	d=(a/100);
    d=d%10;
	e=(a/1000);
    e=e%10;
	f=(a/10000);
    f=f%10;
	total=b+c+d+e+f;
	printf("%d",total);
}