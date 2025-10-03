#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double milk;
    const double CARTON=3.78, COST_PER_LITER=0.38, PROFIT_PER_CARTON=0.27;
    cout<<"Enter total milk produced (liters): ";
    cin>>milk;

    double cartons = round(milk / CARTON);
    double totalCost = milk * COST_PER_LITER;
    double totalProfit = cartons * PROFIT_PER_CARTON;

    cout<<"Cartons needed: "<<cartons<<endl;
    cout<<"Production cost: $"<<totalCost<<endl;
    cout<<"Profit: $"<<totalProfit<<endl;
    return 0;
}
