#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int t1,n,i,t2,next=0;
cout<<"enter the no of terms";
cin>>n;
for(i=1;i<n;i++)
{
if(i==1)
cout<<" "<<t1;
continue;
}
if(i==2)
{
cout<<" "<<t2;
continue;
}
nextterm=t1+t2;
t1=t2;
t2=nextterm;
cout<<nextterm<<" ";
}
return 0;
}
