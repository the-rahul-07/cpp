#include <iostream>
#include <string>

using std ::cin;
using std ::cout;

int main()
{
    // Cpp strings >>> C strings
    std ::string greeting = "hello";
    cout << greeting[0] << "\n";
    std ::string abc; // empty sting
    cout << abc << "\n";

    // string concatination
    std ::string a = " there";
    cout << greeting + a << "\n";
    // OR
    std ::string complete_greeting = greeting + a;
    cout << complete_greeting << "\n";

    complete_greeting += "!";
    cout << complete_greeting << "\n";

    cout << complete_greeting.length() << "\n";

    // method -- member function -- functions attached to objects

    char name[] = "neha"; // c sting  -- array of characters "neha\0"
    // name = "rahul";

    complete_greeting = "Go away";
    cout << complete_greeting << "\n";
    return 0;
}