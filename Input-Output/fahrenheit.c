#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){

	float celsius,fahrenheit;
	printf("enter temperature in celsius:");     //45
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;                  //(45*9/5)+32
	printf("%.2f celsius= %.2f Fahrenheit",celsius,fahrenheit);        //113
	return 0;
}
