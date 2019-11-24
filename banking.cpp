#include<iostream.h>
#include<fstream.h>
#include<ctype.h>
#include<iomanip.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>

//*********************Class used***********************//

class account
 {
    int acno;
    char name[50];
    int deposit;
    char type,address[50];
    char ph[11];

   public:  account()
	   {
	     acno=0;
	     strcpy(name,"NA");
	     strcpy(address,"NA");
	     strcpy(ph,"NA");
	     type='A';
	     deposit=0;
	   }
	   int count_rec;
	   // void begin();
	    void create_account();
	    void show_account();
	    void modify();
	    void dep(int);
	    void draw(int);
	    void report() const;
	    int retacno() const;
	    int retdeposit() const;
	    char rettype() const;
	    int retcount_rec();
  };
  account ac;
 int pass();
 void begin()
{ clrscr();
  int i,j;
  gotoxy(3,2);
  textcolor(RED);
  cprintf("___________________________________________________________________________\n");
  gotoxy(3,1);
  textcolor(YELLOW);
  cprintf("____________________________________________________________________________\n");
  gotoxy(25,3);
  cprintf("   \n\nWELCOME TO ONLINE BANKING \n");
  gotoxy(3,6);
  textcolor(RED);
  cprintf("____________________________________________________________________________\n");
  gotoxy(3,7);
  textcolor(YELLOW);
  cprintf("_____________________________________________________________________________\n");
  const char U_I[]="Anju";
  char name[30];
  for(i=22;i<50;i++)
   {
     gotoxy(i,12);
     cout<<".";
     }
 for(i=12;i<18;i++)
   {
     gotoxy(22,i);
     cout<<".";
   }
  for(i=22;i<50;i++)
   {
      gotoxy(i,50);
      cout<<".";
    }
  for(i=12;i<18;i++)
  {
     gotoxy(50,i);
     cout<<".";
   }
  gotoxy(25,13);
  textcolor(GREEN);
  cprintf("ID-NAME  : ");
  gets(name);
  gotoxy(25,15);
  textcolor(GREEN);
  cprintf("PASSWORD :");
  if(!pass())
  {
	char st[]="\n\n\n\n\n\t\t\t\tLOADING....";

     /*	for(i=0;i<strlen(st);i++)
	{    clrscr();
	     for(j=0;j<=i;j++)
	      cout<<st[j];
	     delay(500);
	}*/
    cout<<st;
   }
   else
   {
       cout<<"Incorrect";
       getch();
	   exit(0);

}
}
///*************************** PASSWORD ****************************
int pass()
{
 char key='\0';
 int i=0;
 char pass[30],check[30];
 ifstream infile("Pass.txt");
 if(!infile)
 {
  ofstream outfile("Pass.txt");
  gotoxy(24,15);
  cout<<"New Password:";
   while(key!=13)
 {
  key=getch();
  if(key==8)
  {

   if(i>0)
   {
    cout<<"\b \b";
    --i;
  }
  }
  else
  {
   if(!(key==13))
   {
   cout<<"*";
   pass[i]=key;
   i++;
   }
  }
 }
 pass[--i]='\0';
 outfile.write((char *)&pass,sizeof(pass));
 outfile.close();
 gotoxy(25,20);
 textcolor(RED+BLINK);
 cprintf("Restart Your Program");
 textcolor(GREEN);
 cout<<"\n\t\tPress Any Key To Restart";
 getch();
  exit(1);
 }
 infile.read((char*)&check,sizeof(check));
 gotoxy(35,15);
 infile.close();
 while(key!=13)
 {
  key=getch();
  if(key==8)
  {

   if(i>0)
   {
    cout<<"\b \b";
    --i;
  }
  }
  else
  {
   if(!(key==13))
   {
   cout<<"*";
   pass[i]=key;
   i++;
  }
  }
 }
 pass[--i]='\0';

 if(strcmp(pass,check)==0)
 {
  gotoxy(35,20);
  cout<<"Access Granted";
  getch();
  return 0;
 }
 else
 {
  gotoxy(35,20);
  cout<<"Access Denied";
  getch();
  return 1;
 }

}
 void account::create_account()
   {

      clrscr();
      textcolor(WHITE);
      gotoxy(3,3);
      cprintf("Creating an account");
      cout<<"\n\n\n\tEnter the account no. :";
      cin>>acno;
      cout<<"\n\tEnter the name of the account holder : ";
      gets(name);
      cout<<"\n\tEnter your address : ";
      gets(address);
      cout<<"\n\tEnter your contact no. ";
      gets(ph);
     if(strlen(ph)!=10)
     {
      cout<<"\n\tInvalid ph no.!! Try again!!";
      cout<<"\n\tEnter ph no.";
      gets(ph);
     }
      cout<<"\n\tEnter type of the account(c/s) : ";
      cin>>type;
      type=toupper(type);
      cout<<"\n\tEnter the initial amount( >=500 for saving and >=1000 for current ) :";
      cin>>deposit;
      if((type=='S' && deposit>=500)||(type=='C' && deposit>=1000))
      { cout<<"\n\n\tAcount Created...";
       ac.count_rec++;
      }
      else
       cout<<"\n\tAccount not created...";
      getch();
   }

 void account::show_account()
  {
  // clrscr();
      cout<<"\n\tAccount No. : "<<acno;
      cout<<"\n\tAccount Holder Name : "<<name;
      cout<<"\n\tAddress: "<<address;
      cout<<"\n\tPhone no : "<<ph;
      cout<<"\n\tType of Account : "<<type;
      cout<<"\n\tBalance amount : "<<deposit;
      getch();
 }

 void account::modify()
  {
    // account ac1;
     char adr[50],p[11];
     cout<<"\n\tModify address ('.'to retain old one) : ";
     gets(adr);
     if(strcmpi(adr,".")!=0)
	strcpy(address,adr);
     cout<<"\n\tModify Phone no ('.'to retain old one): ";
     gets(p);
     if(strcmpi(p,".")!=0)
	strcpy(ph,p);
   }

 void account::dep(int x)
  {
       deposit+=x;
  }

 void account::draw(int x)
  {
      deposit-=x;
  }

 void account::report()  const
   {
       cout<<"\n"<<setw(5)<<" "<<acno;
       cout<<setw(6)<<" "<<name;
       cout<<setw(7)<<" "<<address;
       cout<<setw(8)<<" "<<ph;
       cout<<setw(7)<<" "<<type;
       cout<<setw(10)<<" "<<deposit<<endl;
   }

 int account::retacno() const
    {
       return acno;
     }

 int account::retdeposit()  const
    {
       return deposit;
    }

 char account::rettype() const
    {
      return type;
    }

 int account::retcount_rec()
   {
     return count_rec;
   }
///***********************************Function declaration ****************************
void write_account();
void display_account(int);
void modify_account(int);
void delete_account(int);
void display_all();
void deposit_withdraw(int , int);
void intro();

//*******************The main function of program  ****************************
void main()
 {
    char ch;
    int num;
    begin();
    do
      {  clrscr();
	  for(int i=0;i<80;i++)
	   {  gotoxy(i,4);
	      textcolor(i);
	      cprintf("__");
	    }
	 gotoxy(1,3);
	 textcolor(RED);
	 cprintf("________________________________________________________________________________\n");
	 gotoxy(35,4);
	 textcolor(LIGHTBLUE);
	 cprintf("\nMAIN MENU\n");
	 gotoxy(1,7);
	 textcolor(RED);
	 cprintf("________________________________________________________________________________\n");
	  for( i=0;i<80;i++)
	   {  gotoxy(i,6);
	      textcolor(i);
	      cprintf("__");
	    }
	 cout<<endl<<endl<<endl<<endl;
	 textcolor(WHITE);
	 cprintf(  "           1. NEW ACCOUNT            ");
	 textcolor(WHITE);
	 cout<<endl;
	 cprintf(  "           2. DEPOSIT AMOUNT         ");
	 textcolor(WHITE);
	 cout<<endl;
	 cprintf(  "           3. WITHDRAW AMOUNT         ");
	 textcolor(WHITE);
	 cout<<endl;
	 cprintf(  "           4. BALANCE ENQUIRY         ");
	 textcolor(WHITE);
	 cout<<endl;
	 cprintf(  "           5. ALL ACCOUNT HOLDER LIST ");
	 textcolor(WHITE);
	 cout<<endl;
	 cprintf(  "           6. CLOSE AN ACCOUNT        ");
	 textcolor(WHITE);
	 cout<<endl;
	 cprintf("           7. MODIFY AN ACCOUNT       ");
	 textcolor(WHITE);
	 cout<<endl;
	 cprintf("           8. EXIT                    ");
	 textcolor(GREEN);
	 cprintf("\n\n\n Select Your Option [1-8] ");
	 cin>>ch;
	 switch(ch)
	  {
	     case '1' : textcolor(LIGHTRED);
			write_account();
			break;
	     case '2' : clrscr();
			textcolor(LIGHTRED);
			cout<<"\n\n\tEnter The account No. : ";
			cin>>num;
			deposit_withdraw(num,1);
			getch();
			break;

	     case '3' : clrscr();
			textcolor(LIGHTRED);
			cout<<"\n\n\tEnter The account No. : ";
			cin>>num;
			deposit_withdraw(num,2);
			getch();
			break;
	     case '4' :
			textcolor(LIGHTRED);
			cout<<"\n\n\tEnter The account No. : ";
			cin>>num;
			display_account(num);
			getch();
			break;
	     case '5' : clrscr();
			textcolor(LIGHTRED);
			display_all();
			getch();
			break;
	     case '6' : clrscr();
			textcolor(LIGHTRED);
			cout<<"\n\n\tEnter The Account No. : ";
			cin>>num;
			delete_account(num);
			getch();
			break;
	     case '7' : clrscr();
			textcolor(LIGHTRED);
			cout<<"\n\n\t Enter The Account No. ";
			cin>>num;
			modify_account(num);
			break;
	     case '8' : textcolor(LIGHTBLUE);
			cprintf("\n\n    Thanks For Using Management System ");
			break;
	     default  : cout<<"\n\n\tInvalid choice Try Again !!";
	  }

      }
	     while(ch!='8');

    getch();
   }

///***************** Function to write in file ***********************************
void write_account()
 {
   // account ac;
    ofstream outfile("account.txt",ios::app);
    if(!outfile)
     {
	cout<<"\n\tNot able to create file";
	exit(1);
    }
    ac.create_account();
    outfile.write((char*)&ac,sizeof(account));
    outfile.close();
 }

//*******************function to read specific recordfrom file *****************************

void display_account(int no)
 {
    // account ac;
     char flag='f';
     ifstream infile("account.txt");
     if(!infile)
      {
	  cout<<"\n\tFile not found";
	  exit(1);
      }
      clrscr();
      gotoxy(25,3);
      textcolor(WHITE);
      cprintf("     BALANCE DETAILS\n");
      gotoxy(3,4);
      textcolor(6);
      cprintf("________________________________________________________________________\n");
      while(infile.read((char*)&ac,sizeof(account)))
       {
	    if(ac.retacno()==no)
	     {
		ac.show_account();
		flag='t';
	     }
	}
       infile.close();
       if(flag=='f')
       cout<<"\n\tAccount number does not exist";
       getch();
    }
//**********************File to modify recordof file ******************************
void modify_account(int no)
 {
      char found='f';
      account ac;
      ifstream tempfile("account.txt",ios::in);
      ofstream newfile("tempo.txt",ios::ate);
      if(!tempfile||!newfile)
       {
	   cout<<"\n\tFile could not be open !!Press any key...";
	   exit(1);
       }
      // clrscr();
       char ch;
       tempfile.seekg(0,ios::beg);
       while(tempfile.read((char*)&ac,sizeof(account)))
       {
	 if(ac.retacno()==no)
	  {
	    found='t';
	    ac.show_account();
	    cout<<"\n\n\tEnter the New details of account\n"<<endl;
	    ac.modify();
	    cout<<"\n\n\tDo you really want to modify your account [Y/N] : ";
	    cin>>ch;
	    ch=toupper(ch);
	  }
	  newfile.seekp(0,ios::end);
	  newfile.write((char*)&ac,sizeof(ac));
	 }

	 tempfile.close();
	 newfile.close();
      if(found=='f'||ch!='Y')
      {
       cout<<"\n\n\tRecord not Updated";
      }
      else
      {
	 remove("account.txt");
	 rename("tempo.txt","account.txt");
	 cout<<"Record Modified";
      }

      getch();
 }

///********************* Function to delete record of file ************************

void delete_account(int no)
 {
   // account ac;
    fstream infile("account.txt",ios::ate);
    if(!infile)
     {
	cout<<"\n\tFile not found";
	exit(1);
     }
    ofstream outfile("tempo.txt");
    if(!outfile)
     {
	cout<<"\n\tnot able to create file ";
	exit(1);
     }
   // clrscr();
    char found='f',confirm='\0';
    int rec=0;
    while(infile.read((char*)&ac,sizeof(ac)))
     {
	if(infile)
	{ rec++;
	  if(ac.retacno()==no)
	 {
	    ac.show_account();
	    found='t';
	    cout<<"\n\n\tDo you relly want to close your account [Y/N] : ";
	    cin>>confirm;
	    confirm=toupper(confirm);
	    if(confirm=='Y')
	    outfile.seekp(0,ios::end);
	    outfile.write((char*)&ac,sizeof(ac));
	    infile.seekg(0,ios::end);
	    int size=infile.tellg()/sizeof(ac);
	    infile.seekg(rec*sizeof(ac));
	    while(rec<size)
	    {
	      infile.read((char*)&ac,sizeof(ac));
	      infile.seekg(rec);
	      outfile.write((char*)&ac,sizeof(ac));
	      infile.seekg(++rec);
	    }
	    break;

	 }
       }

     }
    infile.close();
    outfile.close();
    if(found!='f')
    {
	 /*remove("account.txt");
	 rename("tempo.txt","account.txt");*/
	cout<<"\n\tRecord deleted...";

    }
    else

   {  cout<<"\n\tAccount does not exist";
    cout<<"\n\tRecord not deleted...";
   }

 getch();
}

//*****************function to display all account deposit list ****************************

void display_all()
 {
     account ac;
     ifstream infile("account.txt");
     if(!infile)
      {
	 cout<<"\n\tFile not found ";
	 exit(1);
     }
     clrscr();
     textcolor(WHITE);
     cprintf("                      \n    ACCOUNT HOLDER LIST\n\n");
     gotoxy(3,3);
     textcolor(YELLOW);
     cprintf(" =========================================================================\n");
     gotoxy(5,4);
     textcolor(LIGHTBLUE);
     cprintf("A/c no.    Name      Address          Phone no.      Type       Balance\n");
     gotoxy(3,5);
     textcolor(YELLOW);
     cprintf(" =========================================================================\n");
     while(infile.read((char*)&ac,sizeof(ac)))
      {
	 ac.report();
      }
     textcolor(LIGHTBLUE);
     gotoxy(60,25);
     cprintf("Total Record : ");
     cout<<ac.count_rec;
     infile.close();
     getch();
  }

  //****************************** function to deposit and withdraw amounts ***************

void deposit_withdraw(int n,int option)
 {
    int amt;
    char found='f';
    account ac;
    fstream file("account.txt",ios::in|ios::out);
    if(!file)
     {
	cout<<"\n\tFile not able to process";
	exit(1);
      }
    clrscr();
    while(!file.eof() && found=='f')
    {
       file.read((char*)&ac,sizeof(account));
       if(ac.retacno()==n)
	{
	  ac.show_account();

	    if(option==1)
	     { textcolor(WHITE);
	       cprintf("\n\n  TO DEOPOSIT AMOUNT ");
	       cout<<"\n\n\n\tEnter the amount to be deposited : ";
	       cin>>amt;
	       ac.dep(amt);
	    }
	    if(option==2)
	     {
		cout<<"\n\n\tTO WITHDRAW AMOUNT ";
		cout<<"\n\n\tEnter the amount to be withdraw : ";
		cin>>amt;
		int bal=ac.retdeposit()-amt;
		if((bal<500 && ac.rettype()=='S')||(bal<1000 && ac.rettype()=='C'))
		    cout<<"\n\tInsufficience Balance ";
		else
		    ac.draw(amt);

	      }
	   int pos=file.tellp();
	   file.seekp((-1)*pos,ios::cur);
	   file.write((char*)&ac,sizeof(account));
	   cout<<"\n\n\tRecord Updated ";
	   found='t';
	}


    }
  file.close();
  if(found=='f')
  cout<<"\n\n\tRecord not found";
  getch();
}

///********************Introduction Function **********************************

void intro()
 {
    clrscr();
    cout<<"\n\n\n\t  BANK ";
    cout<<"\n\n\tMANAGEMENT";
    cout<<"\n\n\t  SYSTEM ";
    cout<<"\n\n\n\n\t MADE BY : Anju ";
    getch();
 }


