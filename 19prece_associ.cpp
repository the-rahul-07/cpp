#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    int x = 10;
    int y;
    // y = x = 100; // y = (x=100)
    (y = x) = 100;
    // = follows right to left associativity

    cout << y << "\t" << x;
    return 0;
}