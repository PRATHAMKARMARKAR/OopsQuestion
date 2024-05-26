/*Write a C++ program to model a simple bank account. Define a class called
BankAccount with the following specifications:*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount() {
        accountNumber = 0;
        balance = 0.0;
        accountHolderName = "";
    }

    BankAccount(int accNum, string accName) {
        accountNumber = accNum;
        balance = 0.0;
        accountHolderName = accName;
    }

    BankAccount(int accNum, string accName, double bal) {
        accountNumber = accNum;
        balance = bal;
        accountHolderName = accName;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance - amount >= 0) {
            balance -= amount;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1;
    BankAccount acc2(123456, "John Doe");
    BankAccount acc3(987654, "Jane Smith", 1000.0);

    cout << "Initial Account Details:" << endl;
    cout << "Account 1:" << endl;
    acc1.display();
    cout << "Account 2:" << endl;
    acc2.display();
    cout << "Account 3:" << endl;
    acc3.display();

    acc1.deposit(500.0);
    acc2.withdraw(200.0);
    acc3.deposit(1000.0);
    acc3.withdraw(1500.0);

    cout << "\nUpdated Account Details:" << endl;
    cout << "Account 1:" << endl;
    acc1.display();
    cout << "Account 2:" << endl;
    acc2.display();
    cout << "Account 3:" << endl;
    acc3.display();

    return 0;
}
