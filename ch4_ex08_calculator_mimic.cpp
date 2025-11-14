#include <iostream>
using namespace std;

int main() {
    int num1, num2, larger;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2)
        larger = num1;
    else
        larger = num2;

    cout << "The larger number is: " << larger << endl;

    return 0;
}
