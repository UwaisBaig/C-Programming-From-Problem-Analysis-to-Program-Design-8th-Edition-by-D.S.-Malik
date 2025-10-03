#include <iostream>
using namespace std;
int main(){
    const double PI=3.141593;
    double radius;
    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<"Area = "<<PI*radius*radius<<endl;
    cout<<"Circumference = "<<2*PI*radius<<endl;
    return 0;
}
