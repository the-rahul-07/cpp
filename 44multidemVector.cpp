#include <iostream>
#include <vector>
using std ::cin;
using std ::cout;

int main()
{
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " \t";
        }
        cout << " \n";
    }
    return 0;
}