#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int a,num,sum=0;
cout<<"enter any number";
cin>>num;
while(num>0)
{
a=num%10;
num=num/10;
sum=sum+a;
}
cout<<"sum of digits are"<<sum;
getch();
}
