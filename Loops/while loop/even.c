//C Program To Print Even Numbers.
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n;
	printf("Enter A Number: ");
	scanf("%d",&n);
	i=2;
	while(i<=n)
	{
	printf("%d ",i);
	i=i+2;
	}
	return 0;
}
