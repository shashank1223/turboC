#include<stdio.h>
#include<coniore.h>
void main()
{
int fib[20];

int i;
fib[0]=0;
fib[1]=1;
for(i=2;i<=20;i++)
fib[i]=fib[i-1]+fib[i-2];
for(i=0;i<20;i++)
printf("%3d %6d\n",fib[i]);
getch ();
}