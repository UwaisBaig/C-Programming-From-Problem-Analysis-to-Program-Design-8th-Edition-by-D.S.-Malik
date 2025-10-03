#include <iostream>
using namespace std;
int main(){
    int seconds;
    cout<<"Enter seconds: ";
    cin>>seconds;
    int h=seconds/3600;
    int m=(seconds%3600)/60;
    int s=seconds%60;
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
