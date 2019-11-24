#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int *arr,temp,i,j,n;
clrscr();
printf("enter the number of elements in the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter a number");
scanf("%d",arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]<arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("elements of array in descending order are ");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
getch();
}
