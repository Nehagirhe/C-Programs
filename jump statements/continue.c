#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=7;
	
	while(n>0)
	{
		n--;
		if(n==5)
		continue;
		printf("%d\n",n);
	}
	
	return 0;
}
