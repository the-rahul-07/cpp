#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    std ::string a = "My name is Rahul";
    for (int i = 0; i < a.length(); i++)
    {
        // cout << a[i] << "\n";
        if (a[i] == 'R')
        {
            cout << "found R!\n";
            // continue; --- > skips R
            // break;  ----> stops to print string when found R
        }
        // cout << a[i] << "\n";
    }

    return 0;
}