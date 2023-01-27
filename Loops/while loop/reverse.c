#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,rev=0;
	printf("enter the number:"); 
	scanf("%d",&n);
	while(n!=0){                    
	rev=rev*10+n%10;             // 0=0*10+123%10= 3             3*10+12%10=32               
	n=n/10;}                    //123=123/10=12                                   
	printf("reverse=%d",rev);
	return 0;
}
