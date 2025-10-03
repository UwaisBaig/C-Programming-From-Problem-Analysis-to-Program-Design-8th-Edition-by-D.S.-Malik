#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double rate, hours;
    const double TAX=0.14;
    cout<<"Enter hourly rate: ";
    cin>>rate;
    cout<<"Enter hours per week: ";
    cin>>hours;

    double gross = rate * hours * 5;
    double net = gross * (1 - TAX);
    double clothes = net * 0.10;
    double supplies = net * 0.01;
    double bonds = (net - clothes - supplies) * 0.25;
    double parents = bonds * 0.50;

    cout<<fixed<<setprecision(2);
    cout<<"Gross: $"<<gross<<endl;
    cout<<"Net: $"<<net<<endl;
    cout<<"Clothes: $"<<clothes<<endl;
    cout<<"Supplies: $"<<supplies<<endl;
    cout<<"Bonds: $"<<bonds<<endl;
    cout<<"Parents add: $"<<parents<<endl;
    return 0;
}
