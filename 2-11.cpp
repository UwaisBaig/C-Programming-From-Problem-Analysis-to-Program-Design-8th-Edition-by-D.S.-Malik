#include <iostream>
using namespace std;
int main(){
    int q,d,n;
    cout<<"Enter quarters: ";
    cin>>q;
    cout<<"Enter dimes: ";
    cin>>d;
    cout<<"Enter nickels: ";
    cin>>n;
    int total = q*25 + d*10 + n*5;
    cout<<"Total = "<<total<<" pennies"<<endl;
    return 0;
}
