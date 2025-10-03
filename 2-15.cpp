#include <iostream>
using namespace std;
int main(){
    int sh;
    double buy,sell;
    cout<<"Enter shares: ";
    cin>>sh;
    cout<<"Enter buy price: ";
    cin>>buy;
    cout<<"Enter sell price: ";
    cin>>sell;

    double invest = sh * buy;
    double recv = sh * sell;
    double chargeBuy = invest * 0.015;
    double chargeSell = recv * 0.015;
    double net = recv - invest - (chargeBuy + chargeSell);

    cout<<"Invested: $"<<invest<<endl;
    cout<<"Charges: $"<<chargeBuy + chargeSell<<endl;
    cout<<"Received (after sell charge): $"<<recv - chargeSell<<endl;
    cout<<"Net gain/loss: $"<<net<<endl;
    return 0;
}
