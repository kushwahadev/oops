// encapsulation

#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string clientName;
    double balance;

public:
    BankAccount(string accNum, string name, double currBala)
    {
        accountNumber = accNum;
        clientName = name;
        balance = currBala;
    }

    // check balance

    double checkBalance()
    {
        return balance;
    }

    // deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        }
    }
};

int main()
{

    BankAccount acc1("SBI1234", "John Snow", 5000.0);

    cout << acc1.checkBalance() << endl;
    acc1.deposit(1500.0);
    acc1.withdraw(2000.0);
    cout << acc1.checkBalance() << endl;
    return 0;
}