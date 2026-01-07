#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    // int guesses[] = {10, 12, 14, 65, 15};
    // cout << guesses[2] << "\n";
    // guesses[2] = 77;
    // cout << guesses[2] << "\n";

    // int a[10];
    // a[0] = 10;
    // cout << a[0] << "\n";

    // cin >> a[0];
    // cout << a[0] << "\n";

    int a[] = {1, 5, 7, 2, 7, 0, 22, 43};
    int size = sizeof(a) / sizeof(int);
    // int size = sizeof(a) / sizeof(a[0]);  same as above
    // to calculate size we hve to do size of array divided by size of one element
    cout << "Size of array : " << size << "\n";
    cout << "Elements of the array\n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}