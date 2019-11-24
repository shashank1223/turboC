#include<iostream>
#include<conio.h>
int main()
{

int a,b,n,c;
cout<<"enter two number";
cin>>a>>b;
cout<<"enter \n 1.add \n 2.sub \n 3.mult \n 4.div \n";
cin>>n;
switch(n)
{
case 1:c=a+b;
cout<<"sum is"<<c;
break;
case 2:c=a-b;
cout<<"difference is"<<c;
break;
case 3:c=a*b;
cout<<"product is"<<c;
break;
case 4:c=a/b;
cout<<"reminer is"<<c;
break;
case 5:c=a%b;
cout<<"remainder is"<<c;
default:cout<<"invalid value";
break;
}getch();
return 0;
}

