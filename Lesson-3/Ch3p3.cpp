#include <iostream>
using namespace std;
consteval double GetPi() { return 22.0 / 7; }

int main()
{
    constexpr double pi = GetPi(); 
    double radius = 0;
    cout << "What is the radius of the circle? (Can be decimal): ";
    cin >> radius;
    double area = pi * radius * radius;
    double circumference = pi * 2 * radius;

    cout << "The area of a circle of radius " << radius << " is " << area << endl;
    cout << "The circumference of a circle of radius " << radius << " is " << circumference << endl;

    return 0;
}