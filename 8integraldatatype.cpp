#include <iostream>
#include <climits>
using std ::cin;
using std ::cout;

int main()
{

    short x;
    int y;
    long z;
    long long u;

    // short <= int <= long <= long long;

    unsigned short x1;
    unsigned int y1;
    unsigned long z1;
    unsigned long long u1;

    cout << sizeof(x) << "\n";
    cout << sizeof(y) << "\n";
    cout << sizeof(z) << "\n";
    cout << sizeof(u) << "\n";
    cout << sizeof(x1) << "\n";
    cout << sizeof(y1) << "\n";
    cout << sizeof(z1) << "\n";
    cout << sizeof(u1) << "\n";
    cout << SHRT_MAX << "\n";
    cout << SHRT_MIN << "\n";
    cout << ULLONG_MAX;

    return 0;
}