#include <iostream>

using namespace std;

int t; // global variable

void funOne(int& a);

int main()
{
    t = 15;
    cout << "In main: t = " << t << endl;

    funOne(t);

    cout << "In main after funOne: t = " << t << endl;

    return 0;
}

void funOne(int& a)
{
    cout << "In funOne: a = " << a 
         << " and t = " << t << endl;

    a = a + 12;
    cout << "In funOne: a = " << a 
         << " and t = " << t << endl;

    t = t + 13;
    cout << "In funOne: a = " << a 
         << " and t = " << t << endl;
}