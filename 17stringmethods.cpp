#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    // function or methods studied
    // string.length()
    // string.size()
    // string.append()
    // string.insert()
    // string.erase()
    // string.pop_back()
    // string.replace()
    // string.find()
    // string.substr()
    // string.find_first_of()
    // string.compare();
    std::string greeting = "Hello";
    cout << greeting.length() << "\n";
    cout << greeting.size() << "\n";
    // length and size func does the same thing!!

    cout << greeting << "\n";
    greeting += " there";
    cout << greeting << "\n";
    // does the same thing as above function append(); --> stringname.append("what to add in string");
    greeting.append(" Rahul!");
    cout << greeting << "\n";

    std::string book = "Hell";
    cout << book << "\n";
    // insert() function---> string_name.insert(index on which to put, "what to put");
    book.insert(4, "o");
    cout << book << "\n";

    // erase() function ---> stringname.erase(index on which to remove, total no character to be removed);
    book.erase(3, 1);
    cout << book << "\n";

    // pop_back() function --> used to remove last character
    book.pop_back();
    cout << book << "\n";

    // replace() function -->  stringname.replace(startingindex, length_to_replace, "what to replace");
    book.replace(0, 3, "rahul");
    cout << book << "\n";

    // find() function --> stringname.find("what to find"); -- returns index of the word in string
    int x = greeting.find("there");
    cout << x << "\n";
    greeting.replace(x, 5, "hy");
    cout << greeting << "\n";

    std ::string a = "what the fuck";
    cout << a << "\n";
    a.replace(a.find("fuck"), 4, "good word");
    cout << a << "\n";

    // substr() function -->  string.substr(on which index, characters long); ---> getting part of string
    cout << a.substr(5, 3) << "\n";

    // find_first_of("letter u want to find"); --> give the index of the word, which is most first
    cout << a.find_first_of("g") << "\n";

    // npos--wasnt found == -1
    cout << a.find_first_of("!") << "\n";

    unsigned long y = -1;
    cout << y << "\n";

    // npos is used for testing
    if (a.find_first_of("!") == -1)
        cout << "NOT FOUND!" << "\n";

    // STRING COMPARISION
    if (greeting == "Hello hy Rahul!")
        cout << "EQUALS" << "\n";

    // compare("string to compare"); --> compares the string
    if (a.compare("what the good word") == 0)
        cout << "Equals" << "\n";

    return 0;
}