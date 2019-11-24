#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int i=1,x;
clrscr();
while(i<=5)
{
printf("enter the number");
scanf("%d",&x) ;
if(x>0)
break;
i++;
}
i==6?printf("ends normally"):printf("applied break");
getch ();
return 0;
}

