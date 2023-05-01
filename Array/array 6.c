#include <stdio.h>
#include <stdlib.h>

/* ru
int main(int argc, char *argv[]) {
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int i,j;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("Enter Value a[%d][%d] :",i,j);
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
	printf("%d ",a[i][j]);
}
printf("\n");	
}
return 0;
}
