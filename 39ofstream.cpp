#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std ::cin;
using std ::cout;

int main()
{
    std::ofstream file;
    // syntax : std::ofstream <this like name of file in program>;
    // eg we do int x = 5;
    // so x is equivalent to file and 5 is equivalent to the actual file created in pc
    file.open("cppfile.txt", std::ios::app);
    // <name of the file>.open("actual file in pc",std::ios::app --- to append);

    // std::ios::app appends means we if run the program again it does not earase
    // the content written before but it adds to it like kind of append data
    // if we dont add std::ios::app when we run program it overwrite whats in the
    // txt file...
    std::vector<std::string> names;
    std ::string inputname;
    // ABOVE CODE CAN BE WRITTEN AS
    /*
    std:: ofstream file ("cppfile.txt");
    here no need to write .open
    */
    cout << "Enter names of students : \n";
    while (getline(cin, inputname))
    {
        names.push_back(inputname);
        if (inputname == "done" || inputname == "DONE" || inputname == "Done")
        {
            names.pop_back();
            break;
        }
    }
    // file << "hello rahul";
    for (int i = 0; i < names.size(); i++)
    {
        file << names[i] << "\n";
    }

    // ASKING FILE NAME FROM USER AND INPUTING DATA
    std::string filename;
    cout << "Enter file to open : \n";
    cin >> filename;

    std::ofstream file1;
    file1.open(filename, std::ios::app);
    /*c_str(); function is bridge btw old c style string and std::strings
    C style string uses arrays and pointer where as in c++ string dont uses them
    so like if we hve suppose strln fun cpp string dks them so to use them we
    convert cpp string into c style string so we write strln(string name.c_str());
    *****MODERN DAY COMPILERS DOSE THIS WORK AUTOMATICALL SO IF WE DONT USE IT ALSO
    IT MAY WORK, DEPENDS ON COMPILER******
    */

    for (std::string inputtingnames : names)
    {
        file1 << inputtingnames << "\n";
    }
    file.close();
    file1.close();
    return 0;
}