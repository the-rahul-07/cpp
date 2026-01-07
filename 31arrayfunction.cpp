#include <iostream>

using std ::cin;
using std ::cout;

void print_array(int array[], int size)
{

    cout << "size of array : " << size << "\n";
    cout << "Elements of the array\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
}
int main()
{
    int a[] = {1, 5, 7, 2, 7, 0, 22, 43};
    int size = sizeof(a) / sizeof(int);

    print_array(a, size);
    return 0;
}