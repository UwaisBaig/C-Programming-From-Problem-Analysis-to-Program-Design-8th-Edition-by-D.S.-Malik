#include <iostream>
using namespace std;
int main(){
    double advertisedGB, actualGB;
    cout<<"Enter advertised hard drive size (GB): ";
    cin>>advertisedGB;
    double bytes = advertisedGB * 1000000000.0;
    actualGB = bytes / (1024.0 * 1024.0 * 1024.0);
    cout<<"Actual storage capacity: "<<actualGB<<" GB"<<endl;
    return 0;
}
