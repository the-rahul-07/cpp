#include <iostream>
using std ::cin;
using std ::cout;
namespace rh
{
    double division(int y, int x)
    {
        return y / x;
    }
}
int main()
{
    int x = 5, y = 25;
    cout << rh::division(y, x) << "\n";
    return 0;
}