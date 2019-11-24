#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
char s[3][10];
int i;
clrscr();
for(i=0;i<3;i++)
{gets(&s[i][0]) ;
}
for(i=0;i<3;i++)
{
printf("%s\n",&s[i]);
}
getch();
return 0;
}