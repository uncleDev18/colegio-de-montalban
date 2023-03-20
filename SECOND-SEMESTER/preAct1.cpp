#include <iostream>

using namespace std;

int main()
{
    int integer;
    char character;
    float deci;
    double point;

    cout << "Enter value for Integer: ";
    cin >> integer;

    cout << "Enter value for Char: ";
    cin >> character;

    cout << "Enter value for Float: ";
    cin >> deci;

    cout << "Enter value for Double: ";
    cin >> point;

    cout << endl;

    cout << "Your  entered value for integer: " <<  integer << endl;
    cout << "Your  entered value for char: " <<  character << endl;
    cout << "Your  entered value for float: " <<  deci << endl;
    cout << "Your  entered value for double: " <<  point << endl;
    
    return 0;
}