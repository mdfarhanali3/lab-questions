/* Assume that a bank maintains two kinds of accounts for their customer: first one is called savings account and the other is called current account. The savings account holders should also maintain a minimum balance and if the balance falls below this level, a service charge imposed(30). Create a class account that stores customer name, account number and type of account. From this, derive classes CrrAcc and SavAcc to make them more specific to their requirements. Include the necessary methods to achieve the following tasks:
a) Accept deposit from a customer and update the balance.
b) Display the balance.
c) Compute and deposit interest.
d) Permit withdrawal and update the balance.
Check for minimum balance, impose penalty, if necessary, and update the balance. */

#include <iostream>
using namespace std;

class account
{
public:
    float balance;
    char name[100];
    char type[100];
    long int acc_no;

    account()
    {
        acc_no = 0;
        balance = 0.0;
    }

    void data()
    {
        cout << "\nEnter customer name: ";
        cin >> name;
        cout << "Enter account type: ";
        cin >> type;
        cout << "Enter account number: ";
        cin >> acc_no;
        cin.ignore();
        cout << "Enter balance: ";
        cin >> balance;
    }

    void display()
    {
        cout << "Customer Name: " << name << endl;
        cout << "Account No: " << acc_no << endl;
        cout << "Type: " << type << endl;
    }
};

class CrAcc : public account
{
public:
    void display()
    {
        cout << "\nCustomer details" << endl;
        account::display();
        cout << "Account balance: " << balance;
    }
    void deposit()
    {
        float d;
        cout << "Enter the amount to deposit: ";
        cin >> d;
        balance += d;
        cout << "updated balance: " << balance;
    }
    void withdraw()
    {
        float withdraw;
        cout << "\nEnter the amount to withdraw: ";
        cin >> withdraw;
        if (balance - withdraw > 500)
        {
            balance = balance - withdraw;
            cout << "updated balance: " << balance;
        }
        else
        {
            cout << "\namount not withdrawn" << endl;
            penalty();
        }
    }
    void penalty()
    {
        if (balance < 1000)
        {
            cout << "penalty imposed: 2000" << endl;
        }
    }
};
class savAcc : public account
{
public:
    void display()
    {
        cout << "Customer details" << endl;
        account::display();
        cout << "Account balance: " << balance;
    }
    void deposit()
    {
        float d;
        cout << "Enter the amount to deposit: ";
        cin >> d;
        balance += d;
        cout << "updated balance: " << balance;
    }
    void withdraw()
    {
        float withdraw;
        cout << "Enter the amount to withdraw: ";
        cin >> withdraw;
        if (balance - withdraw > 500)
        {
            balance = balance - withdraw;
            cout << "updated balance: " << balance;
        }
        else
        {
            cout << "amount not withdrawn" << endl;
            penalty();
        }
    }
    void penalty()
    {
        if (balance < 1000)
        {
            cout << "penalty imposed: 2000" << endl;
        }
    }
};


int main()
{
    int ch;

    CrAcc obj1;
    savAcc obj2;

    cout << "\nEnter the type of account customer wants to create, 0 for current account, 1 for savings account: ";
    cin >> ch;

    if (ch == 0)
    {
        obj1.data();
        cout << endl << endl;
        obj1.display();
        cout << endl << endl;
        obj1.deposit();
        cout << endl << endl;
        obj1.withdraw();
        cout << endl << endl;
        obj1.penalty();
        cout << endl << endl;
    }

    else if (ch == 1)
    {
        obj2.data();
        cout << endl << endl;
        obj2.display();
        cout << endl << endl;
        obj2.deposit();
        cout << endl << endl;
        obj2.withdraw();
        cout << endl << endl;
        obj2.penalty();
        cout << endl << endl;
    }

    else
    {
        cout << "Invalid account type!" << endl;
    }

    return 0;
}