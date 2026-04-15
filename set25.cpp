#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    Account(double b) {
        balance = b;
        cout << "Account created with balance: " << balance << endl;
    }

    // Destructor
    ~Account() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    Account acc1(4000);

    return 0;
}