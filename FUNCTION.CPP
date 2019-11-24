
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void area(int x,int y);
void main()
{
 int x,y;
 printf("enter x and y");
 scanf("%d %d",&x,&y);
 area(x,y);
 getch();
}
void area(int x,int y)
{
int c;
c=x*y;
printf("area of rectangle is%d",c);
}

