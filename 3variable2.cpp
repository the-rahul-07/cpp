#include <iostream>

int main()
{
    int s = 6;

    // NEW LINE USING ENDL COMMAND!! --- NOT SO GOOD FOR CP AS ITS SLOW RUN
    std ::cout << "You have " << s << " slices of pizza." << std ::endl;
    // std :: endl; // WRONG!!! The endl is not statement by itself it has to be used
    // with output stream!!!
    std ::cout << s << "\n";

    // USING \n THIS IS GOOD FOR CP AS IT IS FAST IN RUNTIME

    std ::cout << "You have " << s << " slices of pizza.\n";
    std ::cout << s;
    return 0;
}