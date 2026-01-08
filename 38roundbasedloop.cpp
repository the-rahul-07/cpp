#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    int data[] = {2, 5, 7, 8};

    for (int i = 0; i < 3; i++)
    {
        cout << data[i] << "\t";
    }
    cout << "\n";
    // round based for loop
    for (int n : data)
    {
        cout << n << "\t";
    }
    return 0;
}