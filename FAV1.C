
#include<conio.h>
#include<stdio.h>
int main()
{
int n,len=5;
scanf("%d",&n);
for(int i=0;i<len;i++)
{
for(int j=0;j<len;j++)
{
int min=i<j?i:j;
min=min<len-i?min:len-i-1;
min=min<len-j-1?min:len-j-1;
printf("%d",n-min);
}
printf("\n");
}
return 0;
}
