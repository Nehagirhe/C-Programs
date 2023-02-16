#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int a[3]={2,5,8};
int i,sum=0;
for(i=0;i<3;i++)
{
printf(" %d",a[i]);
sum=sum+a[i];
}
printf("\nSum Of Elements Stored In The Array Is:%d ",sum);
return 0;
}
