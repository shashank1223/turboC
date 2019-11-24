#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int add(void);
void main()
{
int s;
s=add();
printf("sum is%d",s);
getch ();
}
int add()
{
int a,b,c;
printf("enter two number");
scanf("%d\n%d",&a,&b);
c=a+b;
return (c);
}
