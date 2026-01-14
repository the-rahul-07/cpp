#include <iostream>

using std ::cin;
using std ::cout;

/*
// ****CHANGES THE VALUE OF ARGUMENT IN MAIN FUNCTION TOO****
void print_array(int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        data[i]++;
        cout << data[i] << "\t";
    }
    cout << "\n";
}
*/

void do_something(const int data[])
{
}
void print_array(const int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // data[i]++; //--> cant write it as we hve used const keyword so we cant change data
        cout << data[i] << "\t";
    }
    do_something(data); // we can only pass data if the do_something function also
    // hve data parameter as constant, if its not then we are indirectly breaking
    // promise to the main function, means data can be changed!!!

    cout << "\n";
}
// by using const keyword we basically promise the function to not change its data
int main()
{
    int data[] = {1, 2, 3};
    print_array(data, 3);
    cout << data[0]; // we get data[0] as 2, that means function have modified
    // the data even outside the function its modified
    return 0;
}