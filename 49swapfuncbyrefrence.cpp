#include <iostream>

using std ::cin;
using std ::cout;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Value of a : " << x << "\n"
         << " Value of b :" << y << "\n";
}
int main()
{
    int a = 10, b = 5;
    cout << "Value of a : " << a << "\n"
         << " Value of b :" << b << "\n";
    cout << "SWAPPING VALUES OF A & B\n";
    swap(a, b);
    return 0;
}