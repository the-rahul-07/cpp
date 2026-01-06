#include <iostream>
#include <cmath>

using std ::cin;
using std ::cout;

int main()
{

    int base, expo;
    cout << "Enter base : ";
    cin >> base;
    cout << "Enter exponent : ";
    cin >> expo;

    int power = pow(base, expo);
    cout << power;

    return 0;
}