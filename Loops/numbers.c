#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,sum=0;
	for(i=1;i<=7;i++)
	{
		print("%d",i);
		sum=sum+i;
	}
	printf("\nThe Sum Is: %d",sum);
	return 0;
}
