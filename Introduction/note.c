#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int amount=375,a=0,b;
a=amount/100;
b=amount%100;
printf("\n%d Note(s) of 100.00",a);
a=b/50;
b=b%50;
printf("\n%d Note(s) of 50.00",a);
a=b/20;
b=b%20;
printf("\n%d Note(s) of 20.00",a);
a=b/10;
b=b%10;
printf("\n%d Note(s) of 10.00",a);
a=b/5;
b=b%5;
printf("\n%d Note(s) of 5.00",a);
a=b/2;
b=b%2;
printf("\n%d Note(s) of 2.00",a);
a=b/1;
b=b%1;
printf("\n%d Note(s) of 1.00",a);
	return 0;
}
