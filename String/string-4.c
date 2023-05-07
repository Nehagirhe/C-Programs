#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char str[14]="w3resource.com";
	int i,l;
	l=sizeof str/sizeof str[0];
	//printf("enter the string:");
	for(i=l-1;i>=0;i--)
	{
	//	scanf(" %c",&str[i]);
		printf("%c ",str[i]);
	}
	return 0;
}
