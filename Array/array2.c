//Program In C To Read N Number Of Values In An array And Display It In Reverse Order.
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[3]={2,5,7};
    int rev=0,i,j,n;
    n=sizeof a/sizeof a[0];
    printf("The values store into the array are:\n");
    for(j=0;j<3;j++)
    {
    	printf("%d ",a[j]);
	}
	printf("\nThe values store into the array in reverse are:\n");
    for(i=n-1;i>=0;i--)
{
    printf("%d ",a[i]);
}
	return 0;
}
