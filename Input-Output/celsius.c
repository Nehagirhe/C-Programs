#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){

	float celsius,fahrenheit;
	printf("enter temperature in Fahrenheit:");     
	scanf("%f",&fahrenheit);
	celsius=((fahrenheit-32)*5)/9;                  
	printf("%.2f Fahrenheit= %.2f celsius",fahrenheit,celsius);        
	return 0;
}
