#include<iostream.h>
#include<conio.h>
class bsearch
{
public:
int data[10],n,key,first,last,middle;
void getdata();
void display();
};
void bsearch :: getdata()
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
}
void bsearch ::display()
{
first=0;
last=n-1;
middle=(first+last)/2;
while(last>=first){
middle=(first+last)/2;
if(key>data[middle])
first=middle+1;
else if(key<data[middle])
last=middle-1;
else
{
cout<<"\nkey"<<key<<"found in the given array at index"<<middle;
break;
}
}
}
void main()
{
clrscr();
bsearch ob;
ob.getdata();
ob.display();
getch();
}
