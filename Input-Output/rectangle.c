#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int height,width;
float per=0;
printf("Input The Height Of The Rectangle :");  //5 
scanf("%d",&height);  
printf("Input The Width Of The Rectangle :");   //7
scanf("%d",&width);
per=2*(height+width);                          //24
printf("perimeter of the rectangle is :%f",per);
return 0;
}        
