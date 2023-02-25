#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[]="this is string one ";
	char str2[]="this is string two ";

	//strcat(str1,str2);
	printf("After concatenation the string is:\n %s",strcat(str1 ,str2));
	
	return 0;
}
