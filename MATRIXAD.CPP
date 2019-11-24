#include <iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int A[3][3],B[3][3],C[3][3],i,j;
printf("enter   9 no in matrix");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&A[i][j]);
printf("enter 9 no in matrix");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&B[i][j]);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
C[i][j]=A[i][j]+B[i][j];
printf("%d",&C[i][j]);
}
printf("\n");
}
getch();
return 0;
}
