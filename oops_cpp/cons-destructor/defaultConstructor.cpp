#include <iostream>
using namespace std;

// default constructor
class BankAccount
{
public:
    string accountNumber;
    string clientName;
    double balance;

public:
    void displayInfo()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Client Name: " << clientName << endl;
        cout << "Balance: $" << balance << endl;
    }

    BankAccount()
    {
        accountNumber = "321378322302";
        clientName = "Default Client";
        balance = 9474783.0;
        cout << "Default constructor called." << endl;
    }
};

// parameter constructor
class LoanAccount
{
public:
    LoanAccount(string loanNum, string clientName, double amount)
    {
        loanNumber = loanNum;
        borrowerName = clientName;
        loanAmount = amount;
        cout << "Parameter constructor called." << endl;
    }

    void loanDetails()
    {
        cout << "Loan Number: " << loanNumber << endl;
        cout << "Borrower Name: " << borrowerName << endl;
        cout << "Loan Amount: $" << loanAmount << endl;
    }

private:
    string loanNumber;
    string borrowerName;
    double loanAmount;
};

// copy constructor
// why we need of copy constructor?
// when we copy like BankAccount acc2 = acc1; its copy all values, when we change in acc1its not causing any effect on acc2 until we do pointer

int main()
{
    BankAccount acc1;
    // acc1.displayInfo();
    LoanAccount loan1("LN0001", "John Snow", 20000.00);
    // loan1.loanDetails();

    BankAccount acc2 = acc1; // copy constructor called

    acc1.clientName = "Arya Stark"; // changing acc1 client name
    cout << "After modifying acc1 client name:" << endl;
    acc1.displayInfo();
    cout << "acc2 details (should remain unchanged):" << endl;
    acc2.displayInfo();

    return 0;
}