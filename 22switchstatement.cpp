#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    int age;
    cout << "Enter age :";
    cin >> age;

    switch (age)
    {
    case 11:
        cout << "Your age is 11\n";
        break;
    case 12:
        cout << "Your age is 12\n";
        break;
    case 13:
        cout << "Your age is 13,gr8\n";
        break;
    default:
        cout << "You fucking know your age!!\n";
        break;
    }
    return 0;
}