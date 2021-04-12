#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Bank
{
    char name[100];
    char address[100];
    char y;
    int balance;


  public:
    void openAccount();
    void depositMoney();
    void withdrawMoney();
    void displayDetails();

};
void Bank::openAccount()
  {
    cout<<" \t\t------- Open Account  --------\n\n";
    cout<<"Enter your full name ::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address ::";
    cin.ignore();
    cin.getline(address,100);
    cout<<"What type of account you want to open Saving (s) or Current (c)::";
    cin>>y;
    cout<<"Enter initial amount to open account ::";
    cin>>balance;
    cout<<endl << " ";
    cout<<"Your account is created successfully\n";

   }
   void Bank::depositMoney()
   {
       cout<<" \t\t------- Deposit Money  --------\n\n";
        int a;
        cout<<"Enter amount to deposit ::";
        cin>>a;
        balance+=a;
        cout<<"Total balance is ::\t"<<balance;
  }
  void Bank::displayDetails()
  {
      cout<<"\t\t ------- Account Holder's Details  --------\n\n";
      cout<<"Name ::\t" << name;
      cout<<"\nAddress ::\t" << address;
      cout<<"\nAccount Type ::\t" << y;
      cout<<"\nAmount deposited ::" << balance;
  }
 void Bank:: withdrawMoney()
 {
     float amount;

      cout<<" \t\t------- Withdraw Money --------\n\n";
      cout<<"Enter amount ::\t";
      cin>>amount;
      balance = balance - amount;
      cout<< "Remaining balance ::"<<balance;

 }
int main()
{
    int choice;
    int x;
    Bank obj;
    do {
        cout<<"\t\t\t --------- WELCOME -----------\n";
        cout<<"\n\t1) Open Account \n";
        cout<<"\t2) Deposit Money \n";
       cout<<"\t3) Withdraw Money \n";
       cout<<"\t4) Display Details \n";
       cout<<"\t5) EXIT\n";
       cout <<"\n";
       cout<<"\t\t SELECT OPTION :  \n";
       cin>>choice;
      switch (choice)
        {
          case 1: "\n1) Open Account \n";
          obj.openAccount();
          break;
          case 2: "2) Deposit Money \n";
          obj.depositMoney();
          break;
          case 3: "3) Withdraw Money \n";
          obj. withdrawMoney();
          break;
          case 4: "4) Display Details \n";
          obj.displayDetails();
          break;
          case 5:
            if(choice==5){
                exit(1);
            }
          default :
            cout<<"Not exist, please try again()\n";
        }

    cout<<"\nWant to continue press :: Y\n";
    cout<<"Want to exit, press :: N\n";
    x=getch();
    if(x == 'n' || x=='N')
        exit(0);
    }while(x =='y' || x =='Y');

return 0;

}

