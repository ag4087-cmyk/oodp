#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account(double b) : balance(b) {}
    virtual void withdraw(double amount) = 0; // Pure virtual for interface
    void showBalance() { cout << "Remaining Balance: $" << balance << endl; }
};

class SavingsAccount : public Account {
    double minBalance = 500;
public:
    SavingsAccount(double b) : Account(b) {}
    void withdraw(double amount) override {
        if (balance - amount < minBalance) 
            cout << "Withdrawal Denied: Minimum balance requirement not met." << endl;
        else {
            balance -= amount;
            cout << "Savings: Withdrawn $" << amount << endl;
        }
    }
};

class CurrentAccount : public Account {
public:
    CurrentAccount(double b) : Account(b) {}
    void withdraw(double amount) override {
        balance -= amount; // Allows overdraft
        cout << "Current: Withdrawn $" << amount << " (Overdraft used if negative)" << endl;
    }
};

int main() {
    Account* ptr;
    
    SavingsAccount sav(1000);
    CurrentAccount curr(1000);

    ptr = &sav;
    ptr->withdraw(600); // Should fail minBalance check

    ptr = &curr;
    ptr->withdraw(1500); // Should allow overdraft
    ptr->showBalance();

    return 0;
}