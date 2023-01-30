#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=5;
	while(num>0)
	{
		
		if(num==3)
		break;
		printf("%d \n", num);
		num--;
		
	}
	
	return 0;
}
