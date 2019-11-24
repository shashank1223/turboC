#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
printf("enter a string to check it is palindrome or not");
gets(a);
strcpy(b,a);
strev(b);
if(strcmp(a,b)==0);
printf("the string is palindrome\n");
else
printf("the string is't a palindrome");
return 0;
}

