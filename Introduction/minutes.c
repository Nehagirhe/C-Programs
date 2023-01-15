#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int a=0,mint=60,sec=0,data=25300,s=3600,seconds,remseconds=0,b=0,c=0;
a=data/s;
seconds=a*s;
remseconds=data-seconds;
b=remseconds/mint;
c=remseconds-mint;
printf("H:M:S- %d:%d:%d",a,b,c);
	return 0;
}
