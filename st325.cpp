#include <iostream>
using namespace std;

class BankService {
public:
    virtual void process() = 0; // Pure virtual function
};

class DepositService : public BankService {
public:
    void process() override {
        cout << "Deposit Service Processed" << endl;
    }
};

class LoanService : public BankService {
public:
    void process() override {
        cout << "Loan Service Processed" << endl;
    }
};

int main() {
    BankService* s1 = new DepositService();
    BankService* s2 = new LoanService();

    s1->process();
    s2->process();

    delete s1;
    delete s2;
    return 0;
}