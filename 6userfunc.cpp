#include <iostream>

using std ::cin;
using std ::cout;

// double power(double, int); // declaration
double power(double base, int exp) // declaration and definition
{
    double p = 1;
    for (int i = 1; i <= exp; i++)
    {
        p = p * base;
    }
    return p;
}
int main()
{
    int base, expo;

    cout << "Enter base : ";
    cin >> base;
    cout << "Enter exponent : ";
    cin >> expo;

    double mypower = power(base, expo); // function call

    cout << mypower << "\n";
    return 0;
}