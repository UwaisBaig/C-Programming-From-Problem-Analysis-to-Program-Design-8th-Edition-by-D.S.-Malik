#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double bag;
    const double TON = 2205;
    cout<<"Enter bag size (pounds): ";
    cin>>bag;
    double need = ceil(TON / bag);
    cout<<"Bags needed = "<<need<<endl;
    return 0;
}
