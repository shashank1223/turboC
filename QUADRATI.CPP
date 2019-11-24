#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,root1,root2;
printf("input values of a,b and c\n");
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
if(d<0)
printf("root are imaginary\n");
else
{
root1=(-b+sqrt(d))/(2.0*a);
root2=(-b-sqrt(d))/(2.0*a);
printf("root1=%5f\nroot2=%5f\n",root1,root2);
}
return 0;
}