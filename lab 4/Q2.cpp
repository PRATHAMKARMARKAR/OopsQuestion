/*Define a class to represent a bank account, including the following data members:
 Name of the depositor
 Account number
 Type of account
 Balance amount in the account
And member functions:
 To assign initial values
 To deposit an amount
 To withdraw an amount after checking the balance
 To display the name and balance
Write a main program to test the program.*/
#include<iostream>
#include<string>
using namespace std;
class Bankaccount{
int Accountnumber;
int Balance;
string typeofaccount;
string Nameofdepositor;
public:
void setdata(int , int , string , string);
void deposite();
void withdraw();
void showdata();
};
void Bankaccount::setdata(int no,int b,string name,string type){
Accountnumber=no;
Balance=b;
typeofaccount=type;
Nameofdepositor=name;
}
void Bankaccount::deposite(){
   int a;
    cout<<"enter amount to deposite -->"<<endl;
    cin>>a;
    int c = a+Balance;
    cout<<"amount after depositing"<< c<<endl;
}
void Bankaccount::withdraw(){
    int w;
    int amountleft;
    cout<<"enter the amount to withdraw -->"<<endl;
    cin>>w;
    
    if (Balance<w)
    {
        cout<<"Insufficient balance"<<endl;
    }
    else{
        amountleft=Balance-w;
        cout<<"your amount left is -->"<<amountleft<<endl;
    }
}
void Bankaccount::showdata(){
    cout<<"Depositor name is -->"<<Nameofdepositor<<endl;
    cout<<"Balance is -->"<<Balance<<endl;
}
int main(){
Bankaccount b1;
b1.setdata(231418,40000,"PRATHAM","SAVINGS ACCOUNT");
b1.deposite();
b1.withdraw();
b1.showdata();
return 0;
}