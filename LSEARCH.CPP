#include<iostream>
#include<conio.h>
class lsearch
{
public:
int data[10],n,key;
void getdata();
void display();
};
void lsearch :: getdata()
{
cout<<"\nEnter the length of aarray";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"enter element at position"<<i+1<<"\n";
cin>>data[i];
}
cout<<"enter the key to find the element";
cin>>key;
};
void lsearch ::display()
{
int flag=0;
for(int i=0;i<n;i ++)
{
if(key==data[i])
{
cout<<"\nkey"<<key<<"present in the given array at index"<<i;
break;
}
}
}
void main()
{
lsearch ob;
ob.getdata();
ob.display();
getch();
}
