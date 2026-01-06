#include <iostream>
#include <cmath>

using std ::cin;
using std ::cout;

int main()
{
    // funcs --> sqrt, pow, remainder, fmod, fmin, fmax, round, ceil, floor, trunc
    cout << "prints not a number : " << sqrt(-16) << "\n";
    cout << "prints positive infinity : " << pow(9, 999) << "\n";
    cout << "prints negative infinity : " << pow(-9, 999) << "\n";
    // nan, inf, -inf are literal functions like
    cout << NAN;               // prints nan
    cout << INFINITY;          // prints inf
    cout << -INFINITY << "\n"; // prints -inf

    cout << remainder(10, 3) << "\n";
    cout << 10 % 3 << "\n"; // works!
    // cout << 10 % 3.25<<"\n";  // doesn't work gives error
    // in order to this put it inside remainder function
    cout << remainder(10, 3.25) << "\n";
    cout << fmod(10, 3.25) << "\n"; // fmod does same work as remainder fun in most
    // the cases but differs

    cout << fmax(10, 3.25) << "\n";                                     // gives the maximum value btw 2
    cout << fmin(10, 3.25) << "\n";                                     // gives the minimum value btw 2
    cout << "gives the cieling value " << ceil(fmin(10, 3.25)) << "\n"; // gives 4 the celing value
    cout << "gives the floor value " << floor(fmin(10, 3.25)) << "\n";  // gives 3 cuts of 0.25
    cout << "gives the trunc value " << trunc(fmin(10, 3.25)) << "\n";  // gives 3 its like floor
    // TRUNC FUNCTIONS CUTS OF WHATEVER COMES AFTER DECIMAL VALUE
    // WHEREAS FLOOR BRINGS THE VALUE DOWN
    cout << "Diffrenece btw trunc and floor func" << "\n";
    cout << "trunc of -1.5 : " << trunc(-1.5) << "\n";
    cout << "floor of -1.5 : " << floor(-1.5) << "\n";
    cout << "ceil of -3.75 : " << ceil(-3.75) << "\n";
    cout << "ceil of 3.5 : " << ceil(3.5) << "\n";

    // round function
    cout << "rounding off func" << "\n";
    cout << round(-1.49) << "\n";
    cout << round(1.87) << "\n";

    // absolute value function

    cout << "absolute value of -55 : " << abs(-55) << "\n";
    // if we hve floating point value like -11.7 then if use abs it gives 11 and not 11.7 which is right ans
    // for float we hve to use "fabs" function fabs gives -11.7 as 11.7 which is correct
    cout << "absolute value of -11.7 : " << fabs(-11.7) << "\n";
    return 0;
}