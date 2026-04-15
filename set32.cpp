#include <iostream>
#include <cmath>
using namespace std;

class Account {
public:
    void accountInfo() { cout << "Base Account Level" << endl; }
};

class LoanAccount : public Account {
protected:
    double loanAmount;
    double rate;
public:
    LoanAccount(double amt, double r) : loanAmount(amt), rate(r) {}
};

class HomeLoan : public LoanAccount {
    int months;
public:
    HomeLoan(double amt, double r, int m) : LoanAccount(amt, r), months(m) {}
    void calculateEMI() {
        double rPerMonth = rate / (12 * 100);
        double emi = (loanAmount * rPerMonth * pow(1 + rPerMonth, months)) / (pow(1 + rPerMonth, months) - 1);
        cout << "Monthly EMI for Home Loan: $" << emi << endl;
    }
};

int main() {
    HomeLoan myHomeLoan(500000, 8.5, 240); // 500k, 8.5%, 20 years
    myHomeLoan.calculateEMI();
    return 0;
}