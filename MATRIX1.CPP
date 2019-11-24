#include<iostream.h>
#include<conio.h>
int main()
{
int a[3][3];
for(int x=0;x<3;x++){
for(int y=0;y<3;y++)
{
cin>>a[x][y];
}

for(int x=0;x<3;x++)
{
for(int y=0;y<3;y++)
{
cout<<a[x][y]<<"\t";
}
}
cout<<endl;
}
return 0;
}