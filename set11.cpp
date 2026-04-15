#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited Successfully\n";
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient Balance\n";
        else {
            balance -= amount;
            cout << "Withdrawn Successfully\n";
        }
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;
    double amt;

    do {
        cout << "\n1.Deposit 2.Withdraw 3.Balance 4.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cin >> amt;
                acc.deposit(amt);
                break;
            case 2:
                cin >> amt;
                acc.withdraw(amt);
                break;
            case 3:
                acc.showBalance();
                break;
        }
    } while(choice != 4);

    return 0;
}