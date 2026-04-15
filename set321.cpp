#include <iostream>
#include <string>
using namespace std;

// Base Class: Account
class Account {
protected:
    int accNum;
    string holderName;
    double balance;

public:
    Account(int num, string name, double bal) {
        accNum = num;
        holderName = name;
        balance = bal;
    }
};

// Derived Class 1: SavingsAccount
class SavingsAccount : public Account {
public:
    SavingsAccount(int num, string name, double bal) : Account(num, name, bal) {}

    void calculateInterest() {
        // Assuming a 4% interest rate to get 800 from a 20,000 balance
        double interest = balance * 0.04;
        cout << "Savings Account Holder: " << holderName << endl;
        cout << "Interest: " << interest << endl;
    }
};

// Derived Class 2: CurrentAccount
class CurrentAccount : public Account {
public:
    CurrentAccount(int num, string name, double bal) : Account(num, name, bal) {}

    void calculateInterest() {
        // Current accounts usually have 0 interest
        double interest = 0;
        cout << "Current Account Holder: " << holderName << endl;
        cout << "Interest: " << interest << endl;
    }
};

int main() {
    // Creating Savings Account for Meena
    SavingsAccount sa(101, "Meena", 20000);
    sa.calculateInterest();

    // Creating Current Account for Arun
    CurrentAccount ca(102, "Arun", 50000);
    ca.calculateInterest();

    return 0;
}