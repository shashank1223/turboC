#include<conio.h>
#include<stdio.h>
void main()
{
char PT[20],ch,CT[20];
int i,k;
clrscr();
printf("enter plain text:");
gets(PT);
printf("enter key");
scanf("%d",&k);
//for encryption
for(i=0;PT[i]!='\0';i++);
{
ch=PT[i];
if(ch>='A' && ch<='Z')
{
ch=ch+k;
if(ch>'Z')
{
ch=ch-26;
}
}
else if(ch