#include <iostream>
using namespace std;
int main(){
    double originalPrice, markupPercent, taxRate;
    cout<<"Enter the original price: ";
    cin>>originalPrice;
    cout<<"Enter markup percentage: ";
    cin>>markupPercent;
    cout<<"Enter sales tax rate: ";
    cin>>taxRate;

    double sellingPrice = originalPrice + (originalPrice * markupPercent / 100.0);
    double salesTax = sellingPrice * taxRate / 100.0;
    double finalPrice = sellingPrice + salesTax;

    cout<<"\nOriginal Price: $"<<originalPrice;
    cout<<"\nMarkup Percentage: "<<markupPercent<<"%";
    cout<<"\nSelling Price: $"<<sellingPrice;
    cout<<"\nSales Tax Rate: "<<taxRate<<"%";
    cout<<"\nSales Tax: $"<<salesTax;
    cout<<"\nFinal Price: $"<<finalPrice<<endl;
    return 0;
}
