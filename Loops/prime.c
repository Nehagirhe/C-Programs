//C Program To Check Given Number Is Prime Or Not
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[])
{   
	int i=0,n,temp=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=2;i<=(n/2);i++)
	{
	if(n%i==0){
	temp=1;
	break;
	}}
	if(temp==1){
    printf("it is not a prime number.");}
    else
    {printf("it is a prime number.");}
    return 0;
}     

