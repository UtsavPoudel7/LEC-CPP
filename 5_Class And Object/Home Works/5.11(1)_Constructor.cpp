#include <iostream>
using namespace std;

class BankAccount
{
private:
    int account_Number;
    string account_Holder_Name;
    int current_Balance;

public:
    BankAccount(int x, string y, int z)
    {
        account_Number = x;
        account_Holder_Name = y;
        current_Balance = z;
    }

    BankAccount(const BankAccount &b)
    {
        account_Number = b.account_Number;
        account_Holder_Name = b.account_Holder_Name;
        current_Balance = b.current_Balance;
    }

    void deposit(int amount)
    {
        current_Balance += amount;
    }

    void withdraw(int amount)
    {
        if (current_Balance >= amount)
        {
            current_Balance -= amount;
        }
        else
        {
            cout << "Insufficient balance to withdraw " << amount << endl;
        }
    }

    void display()
    {
        cout << "Account Number: " << account_Number << endl;
        cout << "Account Holder: " << account_Holder_Name << endl;
        cout << "Balance: " << current_Balance << endl;
    }
};

int main()
{
    BankAccount account1(123456, "John Doe", 1000);
    BankAccount account2(account1); // Using the copy constructor

    // Display initial account details
    cout << "First Account Details:" << endl;
    account1.display();

    cout << endl;

    cout << "Second Account Details:" << endl;
    account2.display();

    cout << endl;

    // Perform transactions
    account1.deposit(500);
    cout << "Depositing 500 into the first account." << endl;
    cout << "First Account Details:" << endl;
    account1.display();

    cout << endl;

    account2.withdraw(200);
    cout << "Withdrawing 200 from the second account." << endl;
    cout << "Second Account Details:" << endl;
    account2.display();

    return 0;
}