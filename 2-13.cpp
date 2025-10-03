#include <iostream>
using namespace std;
int main(){
    double m1,m2,d;
    const double G=6.67e-8;
    cout<<"Enter mass1 (g): ";
    cin>>m1;
    cout<<"Enter mass2 (g): ";
    cin>>m2;
    cout<<"Enter distance (cm): ";
    cin>>d;

    double f = G * m1 * m2 / (d*d);
    cout<<"Force = "<<f<<" dynes"<<endl;
    return 0;
}
