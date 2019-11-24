#include<stdio.h>
#include<string.h>
int main()
{
char str[1000],ch;
int i,frequency=0;
printf("enter a string");
gets(str);
printf("enter a string to find the frequency\n");
scanf("%c",&ch);
for(i=0;str[i]!='\0';++i)
{
if(ch==str[i])
++frequency;
}
printf("freqency of %c=%d",ch,frequency);
return 0;
}