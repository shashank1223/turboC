#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int  a=0,b=1,count,n;
clrscr();
printf("enter the number of term");
scanf("%d",&n);
printf("%d\n %d",a ,b);
printf("fibonacci series is");
while(count<n)
{
count=a+b;
a=b;
b=count;

printf("%d\n",count);
n++;}

getch();
return 0;
} ;
