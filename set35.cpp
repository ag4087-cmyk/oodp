#include <iostream>
using namespace std;

// Abstract Base Class
class BankService {
public:
    virtual void process() = 0; // Pure virtual function
};

class DepositService : public BankService {
public:
    void process() override {
        cout << "Processing Deposit: Validating currency and updating ledger..." << endl;
    }
};

class LoanService : public BankService {
public:
    void process() override {
        cout << "Processing Loan: Checking credit score and collateral..." << endl;
    }
};

int main() {
    // BankService base; // Error: Cannot instantiate abstract class
    
    BankService* service1 = new DepositService();
    BankService* service2 = new LoanService();

    service1->process();
    service2->process();

    delete service1;
    delete service2;
    return 0;
}