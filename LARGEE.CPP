#include<iostream>
#include<conio.h>
#include<stdio.h>
int main()
{
int i,n,max;
float arr[100];
print<<"enter total number of elements(1 to 100): ";
cin>>n;
cout<<endl;
for(i=0;i<n;i++)
{
cout<<"enter number"<<i+1<<" ";
cin>>arr[i+1];
}
for(i=1;i<n;i++)
{
if(arr[0]<arr[i])
arr[0]=arr[i];
}
cout<<"largest element="<<arr[0];



return 0;
}
