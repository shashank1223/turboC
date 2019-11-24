#include<stdio.h>
#include<conio.h>
int main()
{
int a=0,b=1,c,n;

printf("enter the number of terms");
scanf("%d",&n);
for(int i=0;i<n;i++)
{

c=a+b;

printf("%d \t",i+1);
printf("fibonacci series%d\n ",c);
a=b;
b=c;
}
return 0;
}
