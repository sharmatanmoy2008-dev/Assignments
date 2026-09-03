#include <iostream>
using namespace std;

int main()
{
    float length, breadth, area;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;

    cout << "Area of the rectangle = " << area;

    return 0;
}
