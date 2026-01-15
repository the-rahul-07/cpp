#include <iostream>

using std ::cin;
using std ::cout;

template <typename T>
void swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10, b = 5;
    std::string x = "rahul", y = "neha";
    cout << "Value of a : " << a << "\n"
         << " Value of b :" << b << "\n";
    cout << "SWAPPING VALUES OF A & B\n";
    swap(a, b);
    cout << "Value of a : " << a << "\n"
         << " Value of b :" << b << "\n";

    cout << "\n\n";
    cout << "Value of x : " << x << "\n"
         << " Value of y :" << y << "\n";
    cout << "SWAPPING VALUES OF x & y\n";
    swap(x, y);
    cout << "Value of x : " << x << "\n"
         << " Value of y :" << y << "\n";
    return 0;
}