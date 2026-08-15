#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNo, double bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }

    void showAccount() {
        cout << "\n--- Account Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully!" << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Sejal Langah", 12345, 5000);

    int choice;
    double amount;

    do {
        cout << "\n===== BANK TRANSACTION SYSTEM =====" << endl;
        cout << "1. Show Account Information" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            account.showAccount();
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            break;

        case 4:
            account.checkBalance();
            break;

        case 5:
            cout << "Thank you for using Bank Transaction System!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

}