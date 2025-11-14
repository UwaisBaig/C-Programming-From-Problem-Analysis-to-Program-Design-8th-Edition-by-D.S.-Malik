#include <iostream> 
using namespace std;
int main() 
{ 
int fahrenheit; 
int celsius; 
cout << "Enter temperature in Fahrenheit: "; 
cin >> fahrenheit; 
cout << endl; 
celsius = static_cast<int>
(5.0 / 9 * (fahrenheit - 32) + 0.5); 
cout << fahrenheit << " degree F = " << celsius << " degree C. " << endl;
return 0; 
}