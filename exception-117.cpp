// An exception is an unexpected problem that arises during the execution
// of a program our program terminates suddenly with some
// Exception occurs during the running of the program
// errors/ issues .
// The try keyword represents a block of code that may throw an
// exception placed inside the try block. It's followed by one
// or more catch blocks. If an exception occurs, try block
// throws that exception.
// The catch statement represents a block of code that is executed
// when a particular exception is thrown from the try block.
// The code to handle the exception is written inside the catch block.
// An exception in C++ can be thrown using the throw keyword.
// When a program encounters a throw statement, then it immediately
// terminates the current function and starts finding a matching
// catch block to handle the thrown exception.

#include <iostream>

using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of ₹" << amount << " successful." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal of ₹" << amount << " successful." << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void displayBalance() {
        cout << "Current balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.deposit(100); // Deposit $100
    account.displayBalance(); // Display balance
    account.withdraw(50); // Withdraw $50
    account.displayBalance(); // Display balance
    account.withdraw(200); // Attempt to withdraw $200 (insufficient balance)
    account.displayBalance(); // Display balance

    return 0;
}
