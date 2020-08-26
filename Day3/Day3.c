#include<stdio.h>
// including stdio.h file
int main(){
    float value1,value2;
    // declaring value1 & value2 variables

    printf("----CALCULATOR----\n\n");
    //printing ----CALCULATOR----

    printf("Enter 1st Value: ");
    // printing Enter 1st Value: 
    scanf("%f",&value1);
    // taking value1 input
    printf("Enter 2nd Value: ");
    // printing Enter 2nd Value: 
    scanf("%f",&value2);
    // taking value2 input

    float addition,subtraction,multiplication,division;
    // declaring addition,subtraction,multiplication,division

    addition = value1 + value2;
    subtraction = value1 - value2;
    multiplication = value1 * value2;
    division = value1 / value2;
    // defining addition,subtraction,multiplication,division

    printf("\nResult of Addition on %.2f & %.2f is: %.2f\n",value1,value2,addition);
    // printing addition
    printf("Result of Subtraction on %.2f & %.2f is: %.2f\n",value1,value2,subtraction);
    // printing subtraction
    printf("Result of Multiplication on %.2f & %.2f is: %.2f\n",value1,value2,multiplication);
    // printing multiplication
    printf("Result of Division on %.2f & %.2f is: %.2f\n",value1,value2,division);
    // printing division

    // used %.2f insted of %f to round off a floatig point value to two places. For example, 5.567 should become 5.57 and 5.534 should become 5.53
}