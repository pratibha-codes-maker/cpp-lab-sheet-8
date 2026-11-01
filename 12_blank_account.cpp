#include <iostream>
using namespace std;

// Class BankAccount
class BankAccount
{
private:
    float balance;

public:

    // Constructor
    BankAccount()
    {
        balance = 0;
    }

    // Function to deposit money
    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Amount deposited successfully." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    // Function to display balance
    void display()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    float amount;

    cout << "Enter deposit amount: ";
    cin >> amount;
    account.deposit(amount);

    cout << "Enter withdrawal amount: ";
    cin >> amount;
    account.withdraw(amount);

    account.display();

    return 0;
}
