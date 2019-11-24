#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
printf("enter a string to check it is a palindrome\n");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("the string is palindrome\n");
else
printf("the string isn't a palindrome\n");
return 0;
}
