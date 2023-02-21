#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[16];
	int length;
	
	
	printf("Input The String:");
	scanf("%s",name);
	length=strlen(name);
	printf("length of the string is: %d\n",length);
	return 0;
}
