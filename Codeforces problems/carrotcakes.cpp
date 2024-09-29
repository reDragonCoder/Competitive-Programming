#include <iostream>
using namespace std;

int main() {
    int n, t, k, d, cakesOO, minOO, cakesNO, minNO, i=1;
    cin>>n>>t>>k>>d;

    minOO=n/k;
    minOO*=t;

    minNO=d*n;
    minNO/=k;

    if(minNO<minOO){
        cout<<"YES";
    }else if(minNO>=minOO){
        cout<<"NO";
    }
    return 0;
}