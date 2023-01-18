//Program To Convert Kilometer To Meter,Feet,Inch,centimeter



#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dist,meter,feet,inch,cm;
	printf("Enter distance in kilometers:");   //2
	scanf("%d",&dist);        
	meter =dist*1000;                        //2000
	feet=dist*3280;                          //6560
	inch=dist*39370;                         //78740
	cm=dist*100000;                         //200000
	printf("kilometers To Meter: %d\n",meter);
	printf("Kilometers To Feet:%d \n",feet);
	printf("Kilometers To Inch:%d \n",inch);
	printf("Kilometers To Centimeters:%d \n",cm);
	return 0;
}
