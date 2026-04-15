#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    // Default constructor
    Account() {
        balance = 0;
    }

    // Parameterized constructor
    Account(double b) {
        balance = b;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account acc1;
    Account acc2(5000);

    cout << "Account 1 ";
    acc1.display();

    cout << "Account 2 ";
    acc2.display();

    return 0;
}