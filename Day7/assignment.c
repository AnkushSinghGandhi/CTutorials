#include<stdio.h>
// including stdio.h file
int main(){
	// main block started
	int a;
	int b,c,d,e,f,total;
	// declaring variables
	scanf("%d",&a);
	// taking value of a through keyboard
	b=a%10;
	//geting ones value
	c=(a/10);
    c=c%10;
	// getting ten's value
	d=(a/100);
    d=d%10;
	// getting 100's value
	e=(a/1000);
    e=e%10;
	// getting 1000's value
	f=(a/10000);
    f=f%10;
	total=b+c+d+e+f;
	printf("%d",total);
}
