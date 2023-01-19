#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float p,t,r,si;
	printf("Enter Principle amount:");
	scanf("%f",&p);
	printf("Enter Time(in years):");
	scanf("%f",&t);
	printf("Enter Rate:");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("Simple Interest=%.2f",si);
	return 0;
}
