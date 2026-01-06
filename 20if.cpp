#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    int age;
    cout << "how old are you ?\n";
    cin >> age;

    if (age < 13)
    {
        cout << "Your are small";
    }
    else if (age < 19)
    {
        cout << "Your almost 19";
    }
    else
    {
        cout << "Your are an adult";
    }

    return 0;
}