#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    // // user input for string
    // std ::string greeting;
    // cin >> greeting;
    // cout << greeting << "\n";
    // //only input the first string means if there is any space it stops storing
    // //  if we input "rahul neha" -- it only stores rahul and not neha

    // std ::string leftover;
    // cin >> leftover;
    // cout << leftover << "\n";

    // // to get multiple words we use func getline();

    std::string greeting;
    cout << "Enter string" << "\n";
    getline(cin, greeting); // used to store string - character
    cout << greeting << "\n";

    // cin.getline(); --- used to input numbers float and doubles
    return 0;
}