#include<iostream>
using namespace std;

class Student{
int marks, roll_no;
string name;

public:
void input_data(){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll no: ";
    cin >> roll_no;
    cout << "Enter marks: ";
    cin >> marks;
}

void display(){
    cout << "Name : " << name << endl;
    cout << "Roll : " << roll_no << endl;
    cout << "Marks : " << marks << endl;
}
};

class Engineering : public Student{
        string stream;
    public:
    void input_data(){
        Student::input_data();
        cout << "Engineering Stream : ";
        cin >> stream;
    }
    void display(){
        cout << "Engineeering Student details\n";
        Student::display();
        cout << "Engineering Stream : " << stream << endl;
        
    }
};
class law : public Student{
        string stream;
    public:
    void input_data(){
        Student::input_data();
        cout << "Law Stream : ";
        cin.ignore();
        cin >> stream;
    }
    void display(){
        cout << "Law Student details\n";

        Student::display();
        cout << "Law Stream : " << stream << endl;
        
    }
};
class Fine_Arts : public Student{
        string stream;
    public:
    void input_data(){
        Student::input_data();
        cout << "Fine Arts Stream : ";
        cin.ignore();
        cin >> stream;
    }
    void display(){
        cout << "Fine Arts Student details\n";
        Student::display();
        cout << "Fine Arts Stream : " << stream << endl;
        
    }
};

int main()
{
    Engineering e1;
    e1.input_data();
    cout << endl;
    e1.display();

    cout << endl;

    law l1;
    l1.input_data();
    cout << endl;
    l1.display();

    cout << endl;

    Fine_Arts f1;
    f1.input_data();
    cout << endl;
    f1.display();


    return 0;
}