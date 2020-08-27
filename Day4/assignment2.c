// submited by ishan piplani
#include<stdio.h>
int main(){
	float sub1,sub2,sub3,sub4,sub5,sum,perc,total;
	printf("enter marks obtain in 5subject:");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	sum=sub1+sub2+sub3+sub4+sub5;
	total=500;
	perc=sum/5;
	printf("Aggregate marks = %.2f",sum);
    printf("Percentage marks obtained = %.2f",perc);
	
}