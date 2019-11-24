#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int r1,r2,c1,c2,a[10],b[10],i,j,k,mult;
cout<<"enter  row and coloumn of matrix a";
cin>>r1>>c1;
cout<<"enter row and coloumn of matrix b";
cin>>r2>>c2;
//if col of first matrix is not equal to row of sec matrix ask the user to enter
//another size of matrix
while(c1!=r2) {
cout<<" error! coloumn of first matrix is not equal to second matrix";
cout<<"enter row and coloumn of matrix A"<<endl;
cin>>r1>>c1;
cout<<"enter row and coloumn of matrix B"<<endl;
cin>>r2>>c2;
};
//insertion of matrix A
cout<<"enter first matrix";
for(i=0;i<r1;i++)
for(j=0;j<c2;j++)
{
cout<<"elements of  matrix A"<<i+1<<j+1;
cin<< a[i][j];
}
//insertion of second matrix
cout<<"enter matrix B";
for(i=0;i<r2;i++)

for(j=0;j<c2;j++);
{
cout<<"values of matrix B is"<<i+1<<j+1;
cin<< b[i][j];

}
//initialization of mult matrix
for(i=0;i<c1;i++)
for(i=0;i<r2;i++)
{
mult[i][j]=0;
}
//multiplying 2 matrices
for(i=0;i<r1;i++)

for(j=0;j<c2;j++ )
for(k=0;k<c1;k++)
{
mult[i][j]+=a[k][i] * b[j][k];
}
// displaying output
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{cout<<"output"<<endl<<mult[i][j];

cout<<endl;
}
return 0;
getch ();
}



















