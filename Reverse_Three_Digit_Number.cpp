#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;

    cout << "Enter a three-digit number: ";
    cin >> n;

    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    cout << "Reversed number = " << c << b << a;

    return 0;
}
