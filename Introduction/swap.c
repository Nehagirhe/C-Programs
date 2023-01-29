//C Program To Swap Two Numbers.
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int a=10,b=20;
a=a-b;
b=a+b;
a=b-a;
printf("a=%d\n",a);
printf("b=%d\n",b);
return 0;
}
