#include <iostream>

using std ::cin;
using std ::cout;

double square(double x)
{
    return x * x;
}

int main()
{
    if (square(-5) == 25)
    {
        cout << "Test passed";
    }
    return 0;
}