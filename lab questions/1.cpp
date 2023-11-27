#include <iostream>
using namespace std;

int i;

class student
{
    int roll, m1, m2, m3, total;
    string name;

public:
    student()
    {
        roll = 0;
        m1 = 0;
        m2 = 0;
        m3 = 0;
        total = 0;
    }

    void input()
    {
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter roll: ";
        cin >> roll;

        cout << "Enter marks of AI: ";
        cin >> m1;
        cout << "Enter marks of CN: ";
        cin >> m2;
        cout << "Enter marks of SE: ";
        cin >> m3;
    }

    void modify()
    {
        cout << "Enter the modified value of AI: ";
        cin >> m1;
        cout << "Enter the modified value of CN: ";
        cin >> m2;
        cout << "Enter the modified value of SE: ";
        cin >> m3;
    }

    int getroll()
    {
        return roll;
    }
    void calculate()
    {
        total = m1 + m2 + m3;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "AI: " << m1 << endl;
        cout << "CN: " << m2 << endl;
        cout << "SE: " << m3 << endl;
        cout << "Total marks: " << total << endl;
    }
};

int main()
{
    int n, ch, x;

    cout << "Enter the no of students: ";
    cin >> n;

    student s[n];

    for (i = 0; i < n; i++)
    {
        cout << endl;
        s[i].input();
        s[i].calculate();
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        s[i].display();
        cout << endl;
    }
    cout << endl;
    cout << "Do you want to modify press 0(for yes) or press 1(for no) :" << endl;
    cin >> ch;
    cout << endl;
    if (ch == 0)
    {
        cout << "Enter the students roll no. you want to modify: ";
        cin >> x;

        for (i = 0; i < n; i++)
        {
            if (x == s[i].getroll())
            {
                s[i].modify();
                s[i].calculate();
            }
        }
        for (i = 0; i < n; i++)
        {
            cout << endl;
            s[i].display();
        }
    }
    else
    {
        cout << "no modification";
    }

    return 0;
}