#include <iostream>
#include <string>
using std ::cin;
using std ::cout;

int main()
{
    std::string password = "rahul1234";
    std::string pass;

    do
    {
        cout << "Enter the password : ";
        cin >> pass;
    } while (pass != password);
    cout << "\n";
    cout << "Password is correct!, loading... ... ...";

    // password entered is correct then loop terminates
    // password entered is wrong then loop continues to run
    // 5!=5---> false returns 0
    // 5!=10---> true returns 1
    // rahul != rahul1234 ---> ture, loop continue to run
    // rahul1234 != rahul1234 ---> false, loop exit and say password is correct!

    return 0;
}