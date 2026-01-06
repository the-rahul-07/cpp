#include <iostream>

using std ::cin;
using std ::cout;

double power(double base, int exp)
{
    double p = 1;
    for (int i = 1; i <= exp; i++)
    {
        p = p * base;
    }
    return p;
}
void print_pow(double base, int expo)
{
    double mypower = power(base, expo);
    cout << base << " raised to the power " << expo << " is : " << mypower;
}

int main()
{
    double base;
    int expo;
    cout << "Enter base : ";
    cin >> base;
    cout << "Enter exponent : ";
    cin >> expo;
    print_pow(base, expo);
    return 0;
}