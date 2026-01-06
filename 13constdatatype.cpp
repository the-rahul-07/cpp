#include <iostream>

#define A 200
using std ::cin;
using std ::cout;

int main()
{
    const int x = 10;
    cout << x << "\n";
    cout << A << "\n";
    enum // no name enum
    {
        y = 100
    };
    cout << y << "\n";

    /*
    ENUM -- user defined datatype, used to store integral constant
    ENUM SYNTAX!
    enum enum_name {
    statements
    }
    Enum always starts form 0 and its value increses by one of things inside it
    Enum is integer based datatype
    */
    return 0;
}