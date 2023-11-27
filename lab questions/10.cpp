#include<iostream>
using namespace std;

float pi = 3.14;

int Area(int a, int b){
    return a*b;
}
int Area(double a, double b){
    return 0.5*a*b;
}
int Area(float a, double b){
    return (2*pi*a*b)+(2*pi*a*a);
}
int Area(int a){
    return a*a;
}

int main()
{
    int length = 6;
    int breadth = 8;
    double base = 6.0;
    double height = 8.0; 
    float radius = 11.0;
    cout << "Area of rectange: " << Area(length, breadth) << endl;
    cout << "Area of triangle: " << Area(base, height) << endl;
    cout << "Area of cylinder: " << Area(radius, height) << endl;
    cout << "Area of square: " << Area(length) << endl;
}