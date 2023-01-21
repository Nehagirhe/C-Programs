//C Program To Display The Cube Of The Number Upto Given An Integer.

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,avg;
	int sum;
	for(a=1;a<=10;a++)
	{
		sum=sum+a;
		avg=sum/a;
	}
	printf("\nThe Sum of 10 no. is: %d",sum);
	printf("\nThe Average is: %f",avg);
	return 0;
}
