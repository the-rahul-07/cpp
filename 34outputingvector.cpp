#include <iostream>
#include <vector>
using std ::cin;
using std ::cout;

void print_vector(std::vector<int> fundata)
{
    for (int i = 0; i < fundata.size(); i++)
    {
        cout << fundata[i] << "\t";
    }
}

int main()
{
    std::vector<int> data = {10, 20, 30, 40, 50, 60, 70};
    print_vector(data);
    return 0;
}