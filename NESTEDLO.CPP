#include<iostream.h>
#include<conio.h>
int main()
{
char ch;
cout<<"enter any character:";
cin>>ch;
if(ch> 65 && ch<=90)
cout<<endl<<"you entered uppercase character:";
else if(ch>48 && ch<=57)
cout<<endl<<"you enterd a digit";
else if(ch>=97 && ch<=122)
cout<<"you enterd a lowercase character";
else
cout<<"you enterd  a special character";
return 0;
};