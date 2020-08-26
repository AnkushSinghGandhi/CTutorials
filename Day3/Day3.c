#include<stdio.h>
int main(){
    float value1,value2;

    printf("----CALCULATOR----\n\n");

    printf("Enter 1st Value: ");
    scanf("%f",&value1);
    printf("Enter 2nd Value: ");
    scanf("%f",&value2);

    float addition,subtraction,multiplication,division;

    addition = value1 + value2;
    subtraction = value1 - value2;
    multiplication = value1 * value2;
    division = value1 / value2;

    printf("Result of Addition on %f & %f: %f\n",value1,value2,addition);
    printf("Result of Subtraction on %f & %f: %f\n",value1,value2,subtraction);
    printf("Result of Multiplication on %f & %f: %f\n",value1,value2,multiplication);
    printf("Result of Division on %f & %f: %f\n",value1,value2,division);
}