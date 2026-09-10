#include <iostream>
using namespace std;

class Rectangle {
    private: 
    float length;
    float width;

    public: 
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea();
    float calculatePerimeter();
    void display();
};

float Rectangle::calculateArea() {
    return length * width;
}

float Rectangle::calculatePerimeter() {
    return 2 * (length + width);
}

void Rectangle::display() {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << calculateArea() << endl;
    cout << "Perimeter: " << calculatePerimeter() << endl;
}

int main() {
    Rectangle rect;
    float l, w;

    cout << "Enter length and width: ";
    cin >> l >> w;

    rect.setDimensions(l, w);
    rect.display();

    return 0;
}