//C Program To Display The Multiplication Table Vertically From 1 To N 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a,b,c;
    for(a=1;a<=10;a++)
    {
    	for(b=1;b<=10;b++)
    	{
    		printf("\n%dX%d= %d\t",a,b,a*b);
		}
		printf("\n");
	}
	return 0;
}
