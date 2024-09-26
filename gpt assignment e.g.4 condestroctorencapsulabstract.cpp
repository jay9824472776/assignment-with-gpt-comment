#include <iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        double balance;

    public:
        // Constructor to initialize account with number and balance
        BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

        deposit(double amount) {
            balance += amount;
        }

        withdraw(double amount) {
            if (amount <= balance) {
                balance -= amount;
            } else {
                cout << "Insufficient funds!" << endl;
            }
        }

         displayBalance() {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: $" << balance << endl;
        }
};

int main() {
    BankAccount account(12345, 500.0);

    account.deposit(200.0);
    account.withdraw(100.0);
    account.displayBalance();

    return 0;
}

