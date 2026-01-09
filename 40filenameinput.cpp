#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using std ::cin;
using std ::cout;

int main()
{
    std::ofstream filename;
    filename.open("filename.txt", std::ios::app);

    std::vector<std::string> names;

    names.push_back("rahul");
    names.push_back("raj");
    names.push_back("ravi");
    names.push_back("rakesh");

    for (int i = 0; i < names.size(); i++)
    {
        filename << names[i] << "\n";
    }

    // or

    // for (std::string puttingnames : names)
    // {
    //     filename << puttingnames << "\n";
    // }

    return 0;
}