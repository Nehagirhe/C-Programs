#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int a[3]={45,25,21}; //,{4,5,6},{7,8,9}};
printf("Maximum element is: ");
if(a[0]>a[1] && a[0]>a[2])
printf("%d", a[0]);
if(a[1]>a[2] && a[1]>a[0])
printf("%d",a[1]);
if(a[2]>a[1] && a[2]>a[0])
printf("%d",a[2]);
printf("\nMinimum element is: ");
if(a[0]<a[1] && a[0]<a[2])
printf("%d",a[0]);
if(a[1]<a[2] && a[1]<a[0])
printf("%d",a[1]);
if(a[2]<a[1] && a[2]<a[0])
printf("%d",a[2]);
return 0;
}
