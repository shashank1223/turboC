#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,
 h;
clrscr();
printf("enter two number");
scanf("%d\n %d ",&a,&b);
for(h=a<b?a:b;h>1;h--)
{
if(a%h==0&& b%h==0)
break;
}
printf("hcf is %d",h);

getch();
return 0;
}