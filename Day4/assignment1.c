// submited by ishan piplani
#include<stdio.h>
int main (){
	float dist ;
	printf ("distance bettween citesin km");
	scanf ("%f",&dist);
	float meter=dist*1000;
	float cm=dist*1000000;
	float feet=dist*3280.24;
	float inch=feet*12;              
    float mile=dist*0.621371;    
    float yard=dist*1093.61;     
    float nm=dist*0.539957; 
    printf("\n%.2f Km = %.2f meter",dist,meter);
    printf("\n%.2f Km = %.2f centimeter",dist,cm);
    printf("\n%.2f Km = %.2f feet",dist,feet);
    printf("\n%.2f Km = %.2f inches",dist,inch);
    printf("\n%.2f Km = %.2f miles",dist,mile);
    printf("\n%.2f Km = %.2f Yards",dist,yard);
    printf("\n%.2f Km = %.2f Nm",dist,nm);
}