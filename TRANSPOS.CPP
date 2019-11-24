#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int a[10][10],trans[10][10],r,c,i,j;
cout<<"enter rows and colums of matrix";
cin>>r>>c;
//storing element entered by user
cout<<endl<<"enter element of metrix:"<<endl;
for(i=0;i<r;++i)
for(j=0;j<c;j++)
{
cout<<"enter elements a"<<i+1<<j+1<<":";
cin>>a[i][j];
}
//displaying the matrix
cout<< endl<<"entered matrix:"<<endl;
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
cout<<""<<a[i][j];
if(j==c-1)
cout<<endl<<endl;
}
//finding transpos of matrix a[][] and storing
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
trans[j][i]=a[i][j];
}

//displaying transpose
for(i=0;i<c;i++)
for(j=0;j<r;j++)
{
cout<<""<<trans[i][j];
if(j==c-1)
cout<<endl;
};
return 0;
}
