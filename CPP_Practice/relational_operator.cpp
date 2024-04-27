#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 15;

    if (a == b)
    {
        cout << "Line 1 - a and b are equal" << endl;
    }
    else
    {
        cout << "Line 1 - a and b are not equal" << endl;
    }

    if (a > b)
    {
        cout << "Line 2 - a is greater than b" << endl;
    }
    else
    {
        cout << "Line 2 - a is smaller than b" << endl;
    }

    return 0;
}