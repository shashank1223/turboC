#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int i,sum=0,a[10];
float avg;
printf("enetr the numbers to find avg");
for(i=0;i<=9;i++)
{
scanf("%d\n",&a[i]) ;
}
for(i=0;i<=9;i++)
sum=sum+a[i];
avg=sum/10.0;
printf("average is %f",avg);
getch();
return 0;
}