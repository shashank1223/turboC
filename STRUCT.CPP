#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student()
{
char name[50];
int roll;
int marks;
};
student s;
cout<<"enter information"<<endl;
cout<<"enter  name:";
cin>s.name;
cout<<"enter roll number:";
cin>>s.roll;
cout<<"enter marks:";
cin>>s.marks;
cout<<"\n Displaying information"<<endl;
cout<<"namre:"<<s.name<<endl;
cout<<"roll"<<s.roll<<endl;
cout<<"marks"<<s.marks<<endl;
return 0;
}