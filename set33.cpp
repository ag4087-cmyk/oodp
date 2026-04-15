#include <iostream>
#include <string>
using namespace std;

class CustomerDetails {
protected:
    string custName;
    int custID;
public:
    void setCust(string n, int id) { custName = n; custID = id; }
};

class TransactionDetails {
protected:
    double amount;
    string type;
public:
    void setTrans(double amt, string t) { amount = amt; type = t; }
};

class BankingSystem : public CustomerDetails, public TransactionDetails {
public:
    void displayTransaction() {
        cout << "--- Transaction Receipt ---" << endl;
        cout << "Customer ID: " << custID << "\nName: " << custName << endl;
        cout << "Type: " << type << "\nAmount: $" << amount << endl;
    }
};

int main() {
    BankingSystem sys;
    sys.setCust("John Doe", 4455);
    sys.setTrans(1200.50, "Online Transfer");
    sys.displayTransaction();
    return 0;
}