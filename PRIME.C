
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int main()
{
int high,low,i,flag;
cout<<"enger two numbers(intervals):";
cin>>low>>high;
cout<<"prime numbers between"<<low<<"and"<<high<<"are";
while(low<high)
{
flag=0;
for(i=2;i<low/2;i++)
{
if(low%i==0)
{
flag=1;
break;
}
}
if(flag==0)
cout<<low<<" ";
++low;
}
return 0;
}