#include <iostream>
using namespace std;

class BankAccount {
    private:
        string depositorName;
        int accountNumber;
        string accountType;
        float balance;

    public:
        // Assign values to data members
         assignValues(string name, int accNo, string type, float bal) {
            depositorName = name;
            accountNumber = accNo;
            accountType = type;
            balance = bal;
        }

        // Deposit money into the account
        float deposit(float amount) {
            balance += amount;
            return balance; // Return new balance
        }

        // Withdraw money after checking the balance
        float withdraw(float amount) {
            if (amount <= balance) {
                balance -= amount;
            } else {
                cout << "Insufficient balance!" << endl;
            }
            return balance; // Return new balance
        }

        // Display the name of the depositor and balance
        float display() {
            cout << "Name: " << depositorName << ", Balance: " << balance << endl;
            return balance;
        }
};

int main() {
    BankAccount acc;
    acc.assignValues("John", 12345, "Savings", 1000);

    // Perform deposit and withdrawal
    acc.deposit(500);
    acc.withdraw(200);
    acc.display();

    return 0;
}

