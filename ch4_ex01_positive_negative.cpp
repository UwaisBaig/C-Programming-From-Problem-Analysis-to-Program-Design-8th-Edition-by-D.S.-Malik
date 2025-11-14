#include <iostream>
#include <iomanip>
using namespace std;

const double INTEREST_RATE = 0.015;

int main() {
    double creditCardBalance, payment, balance, penalty = 0.0;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter credit card balance: ";
    cin >> creditCardBalance;

    cout << "Enter the payment: ";
    cin >> payment;

    balance = creditCardBalance - payment;

    if (balance > 0)
        penalty = balance * INTEREST_RATE;

    cout << "The balance is: $" << balance << endl;
    cout << "The penalty to be added to your next month bill is: $" << penalty << endl;

    return 0;
}
