#include <iostream>
#include <iomanip>
#define N 10
using namespace std;

int main()
{
    int n[N];

    for (int i = 0; i < N; i++)
    {
        n[i] = i + 100;
    }

    cout << "Element" << setw(10) << "Value" << endl;

    for (int j = 0; j < N; j++)
    {
        cout << setw(5) << j << setw(11) << n[j] << endl;
    }

    return 0;
}