#include <iostream>
using namespace std;

int main()
{
    bool a = true;
    bool b = true;
    cout << "Value of a is " << a << " & "
         << "Value of b is " << b << endl;

    if (a && b)
    {
        cout << "Condition 1 is true" << endl;
    }
    else
    {
        cout << "Condition 1 is false" << endl;
    }

    if (a || b)
    {
        cout << "Condition 2 is true" << endl;
    }
    else
    {
        cout << "Condition 2 is false" << endl;
    }

    a = true;
    b = false;
    cout << "\nNow Value of a is " << a << " & "
         << "Value of b is " << b << endl;

    if (a && b)
    {
        cout << "Condition 3 is true" << endl;
    }
    else
    {
        cout << "Condition 3 is false" << endl;
    }

    if (a || b)
    {
        cout << "Condition 4 is true" << endl;
    }
    else
    {
        cout << "Condition 4 is false" << endl;
    }
}