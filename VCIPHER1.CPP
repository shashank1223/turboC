#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char PT[100],CT[100],key[100],newkey[100];
 int i,j,len,klen;
 clrscr();
 printf("Enter the plain text:");
 gets(PT);
 printf("Enter the key:");
 gets(key);
 len=strlen(PT);
 printf("%d",len);
 klen=strlen(key);
 printf("\n%d",klen);
 printf("\nthe new key:");
 for(i=0,j=0;i<len;i++,j++)
 {
  if(j==klen)
 {
  j=0;
 }
  newkey[i]=key[j];
 }
 newkey[i]='\0';
 puts(newkey);
 //For Encryption
 printf("Encryption of the Plain Text:");
 for(i=0;i<len;i++)
 {
 if(PT[i]>='A' && PT[i]<='Z')
  {
   CT[i]=(PT[i]+newkey[i])%26;
  CT[i]=CT[i]+'A';
  }
 else if(PT[i]>='a' && PT[i]<='z')
  {
   CT[i]=(PT[i]+newkey[i])%26;
   CT[i]=CT[i]+'a';
  }
 }
 CT[i]='\0';
 printf("\n");
 puts(CT);
// for decryption
 printf("Decryption of the Cipher Text:");
// for(i=0;CT[i]!='\0';i++)
 for(i=0;i<len;i++)
 {
 if(CT[i]>='A' && CT[i]<='Z')
  {
   PT[i]=((CT[i]-newkey[i])+26)%26;
   PT[i]=PT[i]+'A';
  }
 else if(CT[i]>='a' && CT[i]<='z')
  {
   PT[i]=((PT[i]-newkey[i])+26)%26;
   PT[i]=PT[i]+'a';
  }
 }
  PT[i]='\0';
  puts(PT);
  getch();
}