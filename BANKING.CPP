#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class ctzn
{
protected:
char uid[50];
char name[20];
public:
ctzn()
{
cout<<"\nEnter UID: ";
gets(uid);
cout<<"\nEnter NAME: ";
cin>>name;
}
//void show()
};
class rbi:public ctzn //whos object cant be created
{
protected:
char pan[30];
public:
rbi()
{
cout<<"\nEnter PAN No.: ";
gets(pan);
}
void virtual deposit()=0;
void virtual withdraw()=0;
void virtual chk_bal()=0;
};
class sbi:public rbi
{
protected:
char ac_no[100];
double cr,dr,balance;
public:
sbi()
{
cout<<"\nEnter account no.: ";
gets(ac_no);
cr=0;
dr=0;
balance=1000;
}
void deposit()
{
cout<<"\nEnter amount to deposit: ";
cin>>cr;
balance=balance+cr;
}
void withdraw()
{
cout<<"\nEnter amount to withdraw: ";
cin>>dr;
if ((balance-dr)-0>=0)
balance=balance-dr;
else
cout<<"\nSorry! Insufficient balance";
}
void chk_bal()
{
cout<<"\nA/C No.: "<<ac_no<<endl;
cout<<"A/C Name : "<<name<<endl;
cout<<"A/C Available Balance: "<<balance;
}
};
class company
{
protected:
char c_name[100];
char d_name[10];
public:
company()
{
cout<<"\nEnter Company Name: ";
cin>>c_name;
cout<<"\nEnter Dept Name: ";
cin>>d_name;
}
};
class employee:public company,public sbi
{
protected:
int eid;
double salary;
public:
employee()
{
cout<<"\nEnter Employee Id: ";
cin>>eid;
cout<<"\nEnter Salary: ";
cin>>salary;
}
};
void main()
{
clrscr();
int ch,ch1=1,ch2;
premenu:
cout<<"\nEnter your choice: 1-Register 0-Exit : ";
cin>>ch;
if(ch==1)
{
employee e;
while(ch1)
{
cout<<"\nEnter 1-Deposit 2-Check Balance 3-Withdraw 4-Pre Menu : ";
cin>>ch2;
switch(ch2)
{
case 1:
e.deposit();
break;
case 2:
e.chk_bal();
break;
case 3:
e.withdraw();
break;
case 4:
goto premenu;
default:
cout<<"\nSorry! Invalid option";
}
cout<<"\n1-Continue... 0-No Transaction : ";
cin>>ch1;
}
}
}