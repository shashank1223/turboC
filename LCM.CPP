#include<iostream>
#include<conio.h>
#include<stdio.h>
int main()
{
int n1,n2,max;
cout<<"enter two numbers";
cin>>n1>>n2;
// maximum value b/w n1 and n2 is stored in max
max=(n1>n2)?n1:n2;
do
{
if(max%n1==0 && max%n2==0)
{
cout<<"LCM="<<max;
break;
}
else
++max;
}while (1);
return 0;
}

