#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[26]="This is w3resource.com";
	int i,count=1;
	//printf("enter the string:");
	for(i=0;i<22;i++)
	{
	//scanf("%c",&str);
	if(str[i]==' ')
	count++;
		
	}
	printf("%d",count);
	return 0;
}
