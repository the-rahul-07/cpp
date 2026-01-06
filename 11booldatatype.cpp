#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    bool pizzaisgood = true;     // bool pizzaisgood = 1 or any non zero value;
    bool burgerisbad = false;    // bool burgerisbad = 0 ;
    cout << pizzaisgood << "\n"; // prints 1
    cout << burgerisbad << "\n"; // prints 0
    // ek bar boolalpha use krne ke baad next statmemt mai bhi false ya true hi print hoga
    cout << std ::boolalpha << pizzaisgood << "\n"; // prints true
    cout << burgerisbad << "\n";                    // prints false
    return 0;
}