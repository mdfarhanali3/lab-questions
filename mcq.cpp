#include<iostream>
using namespace std;
 
class point{
    public:
    point(){
        cout << "Constructor called";
    }
};
int main()
{
    point t1;
    return 0;
}