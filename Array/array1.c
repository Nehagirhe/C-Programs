//write a program in c to store elements in an array and print it.

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
   int main()
{  
	int a[10]={1,1,2,3,4,5,6,7,8,9};
	int i;
	printf("elements in the array are :");
	for(i=0;i<10;i++)
	{
		printf("%d  ",a[i]);
	}
			
	return 0;
}
