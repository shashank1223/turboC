#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int fun(int);
int main()
{
int k;
k=fun(3);
printf("%d",k);
getch ();
}
int fun(int a)
{
int s;
if(a==1)
return(a);
s=a+fun(a-1);
return (s);

}