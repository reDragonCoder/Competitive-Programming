#include <iostream>

using namespace std;

int main(){
    int a,b,k, x=0;

    cin>>a>>b>>k;

    for(int i=1; i<=k; i++){
        x=a*i+b;
        cout<<x<<" ";
    }

    return 0;
}