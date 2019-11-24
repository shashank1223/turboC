#include<iostream>
using namespace std;



int  main()
{
int c,k,n,space=1;
cout<<"enter no of roes";
cin>>n;
space=n-1;
for(k=1;k<n;k++)
{
for(c=1;c<=space;c++)
{cout<<" ";
space--;

for(c=1;c<2*c-1 ;c++)
cout<<"*";
cout<<"\n";
}
space=1;
for(k=1;k<=n-1;k++)
{
for(c=1;c<=space;c++)
cout<<" ";
space++;
for(c=1;c<=2*(n-k)-1;c++)
cout<<"*";
cout<<"\n";
}
return 0;


}
}

