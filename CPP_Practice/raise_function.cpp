#include <csignal>
#include <iostream>
using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";
    exit(signum);
}

int main()
{
    int i = 0;
    signal(SIGINT, signalHandler);

    while (++i)
    {
        cout << "Going to sleep...." << endl;

        if (i == 3)
        {
            raise(SIGINT);
        }
    }   
    return 0;
}