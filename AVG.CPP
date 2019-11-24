#include<stdio.h>
#include<iostream.h>
#include<conio.h>
int main()
{
int a[10],i,j,avg,sum=0;
clrscr();
printf("enetr the numbers1");
for(i=0;i<10;i++)
{
scanf("%d/n",&a[i]);
}
for(i=0;i<10;i++)

sum=sum+a[i];

avg=sum/10;
printf("avg of the given no is%d",avg );
getch();
return 0;
}