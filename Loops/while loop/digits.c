
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int no,nd,sd,rem;
	printf("Enter A Number: ");
	scanf("%d",&no);
	nd=0;
	sd=0;
	while(no>0)
	{
		rem=no%10;
		nd=nd+1;
		sd=sd+rem;
		no=no/10;
	}
	printf("The Number Of Digit Is %d", nd);
	printf("\nSum Of Digit Is %d", sd);
	return 0;
}
