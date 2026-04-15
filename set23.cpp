#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    Account() {
        balance = 0;
    }

    // Deposit only amount
    void deposit(double amount) {
        balance += amount;
        cout << "Balance after deposit: " << balance << endl;
    }

    // Deposit with bonus
    void deposit(double amount, double bonus) {
        balance += (amount + bonus);
        cout << "Balance after deposit with bonus: " << balance << endl;
    }
};

int main() {
    Account acc;

    acc.deposit(1000);
    acc.deposit(1000, 100);

    return 0;
}