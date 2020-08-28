// submited by ishan piplani
#include<stdio.h>
float L, B, R, Area_Rect, Peri_Rect, Area_Circ, Circum_Circ;
int Pi 3.5 ;
int main(){

    printf("\nEnter Length of Rectangle: ");
    scanf("%f",&L);
    printf("\nEnter Breadth of Rectangle: ");
    scanf("%f",&B);
    Area_Rect = L*B;
    Peri_Rect = 2*(L+B);
    printf("\nArea of Rectangle = %0.2f",Area_Rect);
    printf("\nPerimeter of Rectangle = %0.2f",Peri_Rect);
   
    printf("\nEnter Radius of Circle: ");
    scanf("%f",&R);
    Area_Circ = Pi*R*R;
    Circum_Circ = 2*Pi*R;
    printf("\nArea of Circle = %0.2f",Area_Circ);
    printf("\nCircumference of Circle = %0.2f",Circum_Circ);
}