#include<stdio.h>
#include<iostream.h>
#include<fstream.h>
#include<conio.h>

class student
{
int rollno;
char name[20];
float marks;
public:
void getdata(){
cout<"rollno:";
cin>>rollno;
cout<<"name";
cin>>name;
cout<<"marks";
cin>>marks;
}
void putdata()
{
cout<<"rollno:"<<rollno<<"\tname:"<<name<<"\n";
cout<<"marks:"<<marks<<"\n";
}
}stud1;
int main()
{
char y;
ofstream fio("marks",ios::out);
char ans='y';
while(ans==y||ans=='Y')
{
stud1.getdata();
fio.write((char*)&stud1,sizeof(stud1));
cout<<"record added to the file\n";
cout<<"want to enter more record?(y/n)..";
cin>>ans;
}
fio.close();
getch();
return 0;

}
