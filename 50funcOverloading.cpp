#include <iostream>

using std ::cin;
using std ::cout;

struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width) // rectangle
{
    return length * width;
}

double area(double length) // square
{
    return length * length;
}

double area(Rectangle rec)
{
    return rec.length * rec.width;
}

// default argument -- we hve defaulted width with 2
int xyz(double length, double width = 2)
{
    return length * width;
}
// this is what we hve done function overloading
// basically fucntions with same name but diffrenet arugments are passed into them

int main()
{
    Rectangle rec;
    rec.length = 5;
    rec.width = 10;
    cout << area(rec.length, rec.width) << "\n";
    cout << area(rec.length) << "\n";
    cout << area(rec) << "\n";
    cout << xyz(rec.length) << "\n";
    return 0;
}