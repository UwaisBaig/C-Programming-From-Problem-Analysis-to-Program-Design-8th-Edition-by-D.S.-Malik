#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int counter;
    int sum;
    int num;
    ifstream infile;

    // You'll need a file named "data.txt" for this to work
    infile.open("data.txt");

    if (!infile)
    {
        cout << "Error: Could not open file." << endl;
        return 1;
    }

    counter = 0;
    infile >> num;

    while (infile)
    {
        sum = 0;

        while (num != -999)
        {
            sum = sum + num;
            infile >> num;
        }

        counter++;
        cout << "Sum = " << sum << endl;
        infile >> num;
    }

    infile.close();
    return 0;
}
