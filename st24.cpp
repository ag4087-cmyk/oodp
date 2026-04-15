#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    Account(double b = 0) {
        balance = b;
    }

    // Overload + operator
    Account operator+(Account a) {
        Account temp;
        temp.balance = balance + a.balance;
        return temp;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account acc1(2000), acc2(3000);

    Account total = acc1 + acc2;

    cout << "Account 1 ";
    acc1.display();

    cout << "Account 2 ";
    acc2.display();

    cout << "Total ";
    total.display();

    return 0;
}