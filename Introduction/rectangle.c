//C Program To Compute The Perimeter And Area Of A Rectangle With A Height Of 7 Inches And Width Of 5 Inches.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int l=7,b=5,per,area;
	per=2*(l+b);
	area=l*b;
	printf("Perimeter Of The Rectangle =%d inches",per);
    printf("\nArea Of The Rectangle =%d Square inches",area);
	
    return 0;
	
}
