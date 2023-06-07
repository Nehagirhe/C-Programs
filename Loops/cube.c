//C Program To Display The Cube Of The Number Upto Given An Integer.

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int a,cube;
	for(a=1;a<=10;a++)
	{
		cube=a*a*a;
	printf("\nNumber is:%d and cube of the %d is :%d",a,a,cube);
	}
	
	return 0;
}
