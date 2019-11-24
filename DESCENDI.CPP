#include<stdio.h>
#include<conio.h>
int main()
{
int *arr,temp,i,j,n;

printf("enter the number of elements in the array");
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
if(arr[i]<arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("elements of array in descending order are\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
getch();
return 0;
}

