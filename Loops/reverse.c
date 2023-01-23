#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0){
	rev=rev*10+n%10;
	n=n/10;}
	printf("reverse=%d",rev);
	return 0;
}
