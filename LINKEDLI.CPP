#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct Node{
int data;
struct Node*next;
};
struct Node*head;
void insert(int x){
Node*temp=new Node;
temp->data=x;
temp->next=head;
head=temp;
}

void print(){
struct Node*temp=head;
cout<<"list is:";
while(temp!=NULL)
{
cout<<temp->data;
temp=temp->next;
}
cout<<endl;
}
int main(){
head=NULL;
cout<<"how many numbers?\n";
int n,i,x;
cin>>n;
for (i=0;i<n;i++){
cout<<"enter the number\n";
cin>>x;
insert(x);
print();
}
getch();
}