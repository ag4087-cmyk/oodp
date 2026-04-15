#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    Account(double b) {
        balance = b;
    }

    // Copy constructor
    Account(const Account &a) {
        balance = a.balance;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account acc1(3000);
    Account acc2 = acc1;  // Copy

    cout << "Original ";
    acc1.display();

    cout << "Copied ";
    acc2.display();

    return 0;
}