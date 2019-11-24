#include<iostream.h>
#include<math.h>
#include<stdio.h>
int convertBinaryToDecimal(long long);
int main(){
long long n;
cout<<"enter a binary number:";
cin>>n;
cout<<n<<"in binary="<<convertBinaryToDcimal(n)<< "in decimal";
return 0;
}
int convertBinaryToDecimal(long long n)
int decimalNumber=0,i=0,remainder;
while(n!=0)
{
remainder=n%10;
n/=10;
decimalNumber+=remainder*pow(2,i);
++i;
}
return decimalNumber;
}