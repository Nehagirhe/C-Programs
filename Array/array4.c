#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int a[3]={1,5,1};

printf("\nThe unique elements found in the array are: ");
if(a[0]==a[1] && a[0]!=a[2])
printf("%d",a[2]);
if(a[0]==a[2] && a[0]!=a[1])
printf("%d",a[1]);
if(a[1]==a[2]&&a[1]!=a[0])
printf("%d",a[0]);
return 0;
}
