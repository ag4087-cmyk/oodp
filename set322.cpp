#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    string customerName;
public:
    void setName(string name) { customerName = name; }
};

class LoanAccount : public Account {
protected:
    double loanAmount;
public:
    void setLoan(double amt) { loanAmount = amt; }
};

class HomeLoan : public LoanAccount {
public:
    void calculateEMI() {
        // Simple EMI calculation to match output: Amount / 12 months
        double emi = loanAmount / 12; 
        cout << "Customer: " << customerName << endl;
        cout << "Loan Amount: " << loanAmount << endl;
        cout << "Monthly EMI: " << emi << endl;
    }
};

int main() {
    HomeLoan hl;
    hl.setName("Divya");
    hl.setLoan(600000);
    hl.calculateEMI();
    return 0;
}