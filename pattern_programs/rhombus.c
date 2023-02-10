// Mirrored Rhombus Star Pattern

#include <stdio.h>  
int main()  
{  
    int n,i,j,k;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for(i=1;i<=n;i++)  
    {  
      for  (j=1;j<i;j++)  
        {  
            printf(" ");  
        }  
       for ( k=1;k<=n;k++)  
        {  
           printf("*");  
              
        }  
        printf("\n");  
    }  
    return 0;  
}  
