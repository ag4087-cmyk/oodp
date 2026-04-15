#include <iostream>
using namespace std;

class Account {
public:
    virtual void withdraw(int amt) = 0; // Pure virtual function
};

class SavingsAccount : public Account {
public:
    void withdraw(int amt) override {
        cout << "Savings Account Withdrawal Allowed: " << amt 
             << " (Minimum balance rule applied)" << endl;
    }
};

class CurrentAccount : public Account {
public:
    void withdraw(int amt) override {
        cout << "Current Account Withdrawal Allowed: " << amt 
             << " (Overdraft facility available)" << endl;
    }
};

int main() {
    Account* ptr; // Base class pointer
    
    SavingsAccount sa;
    CurrentAccount ca;

    ptr = &sa;
    ptr->withdraw(3000);

    ptr = &ca;
    ptr->withdraw(3000);

    return 0;
}