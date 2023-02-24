#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[28]="Welcome to w3resource.com";
	int i,vcount=0,ccount=0;
	//printf("enter a line of string: ");
	//scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u')
vcount++;
else if((str[i]>'a' && str[i]<'z') || (str[i]>'A' && str[i]<'Z'))
ccount++;
}
printf("\nThe Total Number Of Vowels In The String Is:%d",vcount);
printf("\nThe Total Number Of Consonant In The String Is:%d",ccount);
return 0;
}
