#include<stdio.h>
struct student
{
char name[50];
int roll;
float marks;
} s[5];
int main()
{
int i;
printf("enter information of studemnts:\n");
for(i=0;i<5;i ++)
{
s[i].roll=i+1;
printf("\n for roll number %d,\n",s[i].roll);
printf("enter name");
scanf("%s",s[i].name);
printf("enter marks");
scanf("%f",s[i].marks);
printf("\n");
}
printf("displaying information");
for(i=0;i<5;i++)
{
printf("\n roll number %d\n",i+1);
printf("name");
puts(s[i].name);
printf("marks %f",s[i].marks);
printf("\n");
}
return 0;
}
