#include <iostream>

using namespace std;

int main(){
    int a=0, b=0, c=0;

    cin>>a>>b;

    while(a<=b){
        a*=3;
        b*=2;
        c++;
    }

    cout<<c;

    return 0;
}