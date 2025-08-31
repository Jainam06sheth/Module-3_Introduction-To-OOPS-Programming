#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance = 0.0) {
        if (initialBalance < 0) {
            balance = 0;
            cout << "Initial balance invalid. Setting balance to 0." << endl;
        } else {
            balance = initialBalance;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal." << endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    double initialBalance, depositAmount, withdrawAmount;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(initialBalance);

    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    cout << "Final balance: " << account.getBalance() << endl;

    return 0;
}

