Program In C To Display The N Terms Of Odd Natural Number And Their Sum.
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a,sum=0;
    for(a=1;a<=20;a+=2)
    {
    	printf("%d ",a);
    	sum=sum+a;
}
printf("\nThe Sum Of Odd Natural Number Upto 10 Terms:%d",sum);
	return 0;
}
