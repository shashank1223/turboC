#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int n,rev=0,r;
cout<<"enter the no you want to enter";
cin>>n;
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
cout<<"\Reverse of"<<n<<"is:"<<rev;
getch();
return 0;
}