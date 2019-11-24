#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
 {
 int a,b,sum,choice;
 clrscr();
 printf("\.Sum");
 printf("\n.Odd even");
 printf("\n.Printing N terms");
 printf("\nenter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1 :
 printf("enter two numbers");
 scanf("%d %d",&a, &b);
 sum=a+b;
 printf("%d",sum);
 break;
 case 2 :
 printf("\n.enter any number");
 scanf("%d",a);
 if(a%2==0)
 printf("number is even");
 else
 printf("number is odd");
 break;
 case 3 :
 printf("enter the number");
 scanf("%d",&a);
 for(b=1;b<a;b++)
 printf("%d\n",b);
 break;
 default :
 printf("invalid case");
 break;
 }
 getch();
 return 0;
 }
