#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int height,width;
float per=0;
printf("Input The Height Of The Rectangle :");   
scanf("%d",&height);  
printf("Input The Width Of The Rectangle :");  
scanf("%d",&width);
per=2*(height+width);                          
printf("perimeter of the rectangle is :%f",per);
return 0;
}        
