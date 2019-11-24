#include<stdio.h>
#include<conio.h>
void main()
{
int *arr,i,j,n,temp,k;
clrscr();
printf("enter the number of elements in array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter a number");
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("elements of array after sorting");
for(i=0;i<n;i++)
printf("\n%d",arr[i]);
printf("\n which smallest element do you want to determine");
scanf("%d",&k);
if(k<=n)
printf("desired smallest element is %d",arr[k-1])
;
else
printf("please enter a valid value for finding the particular smallest element");
getch();

}