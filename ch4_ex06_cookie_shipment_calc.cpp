#include <iostream>
using namespace std;

int main() {
    double gpa;

    cout << "Enter the GPA: ";
    cin >> gpa;

    if (gpa >= 2.0) {
        if (gpa >= 3.9)
            cout << "Dean's Honor List." << endl;
        else
            cout << "You meet the graduation requirement." << endl;
    } else {
        cout << "The GPA is below the graduation requirement. See your academic advisor." << endl;
    }

    return 0;
}
