#include<stdio.h>
int main(){
int x;
scanf("%d",&x);

if (x<100){
    printf("value of x is correct\n");
}
else if(x==1){
    
}
else{
    printf("x is greater then 100 re-enter x : ");
    scanf("%d",&x);
    if(x<100){
        printf("value of x is correct\n");
    }
    else{
        printf("you tried a lot....\n");
    }
}
}