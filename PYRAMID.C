#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int i,j,k;
for(i=1,k=0;i<6;i++,k=0)
{
for(j=1;j< 6-i;j++)
{
cout<<" ";
}
while(k!=2*i-1)
{
cout<<"*";
++k;
}
cout<< endl;
}
return 0;
}
