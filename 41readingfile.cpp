#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std ::cin;
using std ::cout;

int main()
{
    std::ifstream file;
    file.open("open.txt");

    // stop reading at white spaces, considers name after every while space
    // even though its a sentence it wont print it like sentence so we hve to use
    // getline function for that
    // std::string line;
    // getline(file, line);
    // cout << line;

    std::vector<std::string> names;
    std::string input;

    while (file >> input)
    {
        names.push_back(input);
    }
    for (std::string readingname : names)
    {
        cout << readingname << "\n";
    }
    return 0;
}