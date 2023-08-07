#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int m=10,n,o;
	int *z=&m;
	printf("\nz stores the address of m=%d",&m);
	printf("\n*z stores the value of m= %d",m);
	printf("\n&m is the address of m=%d",&m);
	printf("\n&n stores the address of n=%d",&n);
	printf("\n&o stores the address of o=%d",&o);
	printf("\n&z stores the address of z=%d",&z);
	return 0;
}
