// DIFFRENCE BTW ARRAY AND SIMPLE VARIABLE IN CPP
// SIMPLE VARIABLE ARE PASSED AS COPY TO THE FUNCTION MEANS SIMPLE PASS BY VALUE
// BUT ARRAY ARE PASSED AS POINTER IN CPP SO THE ORIGINAL VALUE IS ITSELF MODIFIED
//******VERYYY IMPORTANTTT*******

/*
//SIMPLE VARIABLE PASSING
#include <iostream>

using std ::cin;
using std ::cout;

void func(int x)
{
    x++;
    cout << x << "\n";
}
int main()
{
    int x = 10;
    func(x);
    cout << x;
    return 0;
}
*/

/*
//ARRAY PASSING
#include <iostream>

using std ::cin;
using std ::cout;

void func(int data[])
{
    for (int i = 0; i < 3; i++)
    {
        data[i]++;
        cout << data[i] << "\t";
    }
    cout << " \n";
}
int main()
{
    int data[] = {1, 2, 3};
    func(data);
    cout << data[0];
    return 0;
}
*/