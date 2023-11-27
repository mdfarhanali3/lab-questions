#include <iostream>
using namespace std;

class publication
{
    string title;
    float price;

public:
    void getdata()
    {
        cout << "Enter the title of the publication: ";
        cin >> title;
        cout << "Enter the price of the publication: ";
        cin >> price;
    }
    void putdata()
    {
        cout << "The title of the publication: " << title << endl;
        cout << "The price of the publication: " << price << endl;
    }
};

class book : public publication
{
    int pageCount;

public:
    void getdata()
    {
        cout << "Enter the no of pages: ";
        cin >> pageCount;
    }
    void putdata(){
        cout << "The no of pages: " << pageCount << endl;
    }
};
class tape : public publication
{
    float playingMins;

public:
    void getdata()
    {
        cout << "Enter the played duration in mins: ";
        cin >> playingMins;
    }
    void putdata(){
        cout << "Playing time in mins: " << playingMins << endl;
    }
};

int main()
{
    book b1;
    tape t1;

    b1.publication::getdata();
    cout << endl;
    b1.getdata();
    cout << endl;
    b1.publication::putdata();
    cout << endl;
    b1.putdata();

    cout << endl;

    t1.publication::getdata();
    cout << endl;
    t1.getdata();
    cout << endl;
    t1.publication::putdata();
    cout << endl;
    t1.putdata();


}