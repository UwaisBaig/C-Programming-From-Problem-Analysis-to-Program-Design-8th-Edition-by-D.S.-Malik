
#include <iostream>

using namespace std;

int main()
{
    int i;

    // Example 1
    for (i = 1; i <= 5; i++)
    {
        cout << "Hello!" << endl;
        cout << "*" << endl;
    }

    cout << endl;

    // Example 2
    for (i = 1; i <= 5; i++)
        cout << "Hello!" << endl;
        cout << "*" << endl;

    return 0;
}
