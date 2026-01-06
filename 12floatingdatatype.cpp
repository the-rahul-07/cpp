#include <iostream>
#include <float.h>
using std ::cin;
using std ::cout;

int main()
{
    float a = 10.0 / 3;
    a = a * 1000000000000000;

    double b = 10.0 / 3;
    b = b * 1000000000000000;

    long double c = 10.0 / 3;
    c = c * 1000000000000000;

    double x = 7.7e4; // 7.7 x 10^4
    long double y;
    cout << "float less percise  " << std::fixed << a << "\n";
    cout << "more percise than float, double  " << b << "\n";
    cout << "most percise compare to float and double, long double  " << c << "\n";
    cout << std::fixed << a << "\n";
    cout << "size" << "\n";
    cout << FLT_DIG << "\n";  // precise till 5
    cout << DBL_DIG << "\n";  // precise till 15
    cout << LDBL_DIG << "\n"; // precise till 18

    // so the conclusion is float can be used when we dont put big floats
    // using double is okay in most case but if we want litt more precise thn
    // using long double is good
    // perciseness float<double<long double

    return 0;
}