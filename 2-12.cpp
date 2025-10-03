#include <iostream>
using namespace std;
int main(){
    double fix, per, cost, minAdd, maxAdd;
    cout<<"Enter fixed commission: ";
    cin>>fix;
    cout<<"Enter percent: ";
    cin>>per;
    cout<<"Enter car cost: ";
    cin>>cost;
    cout<<"Enter min add: ";
    cin>>minAdd;
    cout<<"Enter max add: ";
    cin>>maxAdd;

    double minPrice = cost + minAdd;
    double maxPrice = cost + maxAdd;
    double minCom = fix + per/100.0 * (minPrice - cost);
    double maxCom = fix + per/100.0 * (maxPrice - cost);

    cout<<"Min price: $"<<minPrice<<endl;
    cout<<"Max price: $"<<maxPrice<<endl;
    cout<<"Commission: $"<<minCom<<" - $"<<maxCom<<endl;
    return 0;
}
