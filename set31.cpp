#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    int accNum;
    string name;
    double balance;
public:
    Account(int n, string nm, double b) : accNum(n), name(nm), balance(b) {}
    void display() {
        cout << "Acc: " << accNum << " | Name: " << name << " | Balance: $" << balance << endl;
    }
};

class SavingsAccount : public Account {
public:
    SavingsAccount(int n, string nm, double b) : Account(n, nm, b) {}
    void calculateInterest() {
        cout << "Savings Interest (4%): $" << balance * 0.04 << endl;
    }
};

class CurrentAccount : public Account {
public:
    CurrentAccount(int n, string nm, double b) : Account(n, nm, b) {}
    void calculateInterest() {
        cout << "Current Interest (1%): $" << balance * 0.01 << endl;
    }
};

int main() {
    SavingsAccount s1(101, "Alice", 5000);
    CurrentAccount c1(201, "Bob", 10000);
    
    s1.display(); s1.calculateInterest();
    c1.display(); c1.calculateInterest();
    return 0;
}