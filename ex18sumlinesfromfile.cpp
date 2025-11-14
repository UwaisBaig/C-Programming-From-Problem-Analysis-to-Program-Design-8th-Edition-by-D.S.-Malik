#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int counter;
    int sum;
    int num;
    ifstream infile;

    infile.open("Exp_5_23.txt");

    if (!infile)
    {
        cout << "Error: Could not open input file." << endl;
        return 1;
    }

    counter = 0;
    while (counter < 5)
    {
        sum = 0;
        infile >> num;

        while (num != -999)
        {
            sum = sum + num;
            infile >> num;
        }

        cout << "Sum = " << sum << endl;
        counter++;
    }

    infile.close();
    return 0;
}
