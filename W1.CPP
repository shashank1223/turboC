#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<5;i++){
for(j=0;j<5;j++){
if(j< 6-i)
printf("*");
else
printf("");
}
}
getch();
return 0;



}