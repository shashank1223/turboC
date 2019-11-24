#include<stdio.h>
#include<conio.h>
void add(void);
void main()


{
clrscr();
add();
getch();
}
void add(void)
{
int a,b,c;
printf("enter first value");
scanf("%d",&a);
printf("enter second value");
scanf("%d",&b);
c=a+b;
printf("addition is %d",c);

}
