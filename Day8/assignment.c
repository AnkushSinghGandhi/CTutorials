#include<stdio.h>
int main(){

	int num,a,b,c,d,e,rev;
	printf("Enter a five digit number\n");
	scanf("%d",&num);
	a=num%10; 
	b=num/10;
	c=b%10;
	b=b/10;
	d=b%10; 
	b=b/10;
	e=b%10; 
	b=b/10;
	rev=a*10000+c*1000+d*100+e*10+b*1;

	printf("Reverse of %d is %d",num,rev);

}