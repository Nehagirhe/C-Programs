//Program  To Print Fibonacci Series.
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int n,i,j,k;
    printf("please give an input upto you want to print series:");
    scanf("%d",&n);                       
    i=0;                            
    j=1;                           
    printf("%d %d ",i,j);
    k=i+j;                         
    while(k<=n)         
    {
    	printf(" %d",k);         //1           2
    	i=j;                     //1           1
    	j=k;                    //1            2
    	k=i+j;                 //2             1+2=3
	}
	return 0;
}
