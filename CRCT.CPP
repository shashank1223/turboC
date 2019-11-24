#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
float x,n,term,sum=0;
printf ("enter value of n:");
scanf("%d",&n);
printf("enter value of x");
scanf("%d",&x);
for(int i=1;i<n;i++)
{
sum=sum+i;
i*=x;
}
printf("sum=%f ; no of terms= %d\n",sum,n);
getch();
return 0;
}




