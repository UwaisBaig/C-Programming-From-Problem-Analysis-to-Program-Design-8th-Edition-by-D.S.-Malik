#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double milk, cost, profit;
    const double CARTON = 3.78;
    cout<<"Enter milk produced (liters): ";
    cin>>milk;
    cout<<"Enter cost per liter: ";
    cin>>cost;
    cout<<"Enter profit per carton: ";
    cin>>profit;

    double cartons = round(milk / CARTON);
    double totalCost = milk * cost;
    double totalProfit = cartons * profit;

    cout<<"Cartons needed: "<<cartons<<endl;
    cout<<"Production cost: $"<<totalCost<<endl;
    cout<<"Profit: $"<<totalProfit<<endl;
    return 0;
}
