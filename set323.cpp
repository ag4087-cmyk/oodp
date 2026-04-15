#include <iostream>
#include <string>
using namespace std;

class CustomerDetails {
protected:
    string name;
public:
    void setCustomer(string n) { name = n; }
};

class TransactionDetails {
protected:
    int transID;
    double amount;
public:
    void setTransaction(int id, double amt) { transID = id; amount = amt; }
};

class BankSystem : public CustomerDetails, public TransactionDetails {
public:
    void display() {
        cout << "Customer Name: " << name << endl;
        cout << "Transaction ID: " << transID << endl;
        cout << "Amount: " << amount << endl;
    }
};

int main() {
    BankSystem bs;
    bs.setCustomer("Karthik");
    bs.setTransaction(1001, 2500);
    bs.display();
    return 0;
}