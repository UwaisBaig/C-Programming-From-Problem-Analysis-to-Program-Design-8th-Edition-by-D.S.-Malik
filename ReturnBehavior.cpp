#include <iostream>

using namespace std;

int funcRet1();
int funcRet2(int z);

int main()
{
    int num = 4;

    cout << "The value returned by funcRet1: "
         << funcRet1() << endl;

    cout << "The value returned by funcRet2: "
         << funcRet2(num) << endl;

    return 0;
}

int funcRet1()
{
    int x = 45;
    return 23, x;
}

int funcRet2(int z)
{
    int a = 2;
    int b = 3;
    return 2 * a + b, z + b;
}