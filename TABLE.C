#include<conio.h>
#include<stdio.h>
#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
int main()
{
int row,col,y;
clrscr();
row=1;
printf("      MULTIPLICATION TABLE     \N");
do{
col=1;
do
{
y=row*col;
printf("%4d",y);
col++;
}
while(col<=COLMAX);
printf("\n");
row++;
}
while(row<=ROWMAX);
getch();
return 0;
}