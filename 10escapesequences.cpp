#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    cout << "HELLO \t WORLD" << "\n"; // tab
    cout << "hello \b world" << "\n"; // delete character of back
    cout << "HELLO \n world" << "\n"; // new line
    cout << "hello \a world" << "\n"; // does a beep sound
    cout << "\0";                     // string ending
    cout << "\"" << "\n";             // printing double quotes
    cout << "rahul\'s" << "\n";       // for single quotes --> can be done as rahul's
    // but if we want to put single quote in variable that why we use backslash
    char singlequote = '\'';
    cout << singlequote << "\n";
    cout << "\\"; // for backslash
    return 0;
}