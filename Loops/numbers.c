//C Program To Display n Terms Of Natural Number And Their Sum.

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,sum=0;
	printf("The first 7 Natural Number Is:\n");
	for(i=1;i<=7;i++)
	{
		print("%d",i);
		sum=sum+i;
	}
	printf("The Sum Of Natural Number Is: %d",sum);
	return 0;
}
