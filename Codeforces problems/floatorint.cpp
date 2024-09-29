#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float n=0, decimal=0;
    int integer=0;

    cin>>n;

    integer=n;
    decimal=n-integer;

    if(decimal>0){
        cout<<"float"<<" "<<integer<<" "<<setprecision(3)<<decimal;
    }else if(decimal==0){
        cout<<"int"<<" "<<integer;
    }

    return 0;
}