#include <iostream>
#include <array>

using std ::cin;
using std ::cout;

void print_array(std::array<int, 10> funcdata, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << funcdata[i] << "\t";
    }
}

int main()
{
    std::array<int, 10> data = {1, 4, 6};
    print_array(data, 3);
    return 0;
}