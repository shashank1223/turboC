#define first  360
#define second 240
#include<stdio.h>
main()
{
int n,m,i,j,roll_no,marks,total;
printf("enter number of students and subjects");
scanf("%d %d",&n,&m);
printf("\n");
for( i=1;i<=n;i++)
{
printf("enter roll_number");
scanf("%d ",&roll_no);
total=0;
printf("\n enter marks of %d subjects for roll_n0 %d\n",m,roll_no);
for( j=1;j<=m;j++)
{
scanf("%d",&marks);
total+=marks;
}
printf("total marks=%d",total);
if(total>=first)
printf("first division");
else if(total>=second)
printf("second division");
else
printf("****FAIL****");
}
}