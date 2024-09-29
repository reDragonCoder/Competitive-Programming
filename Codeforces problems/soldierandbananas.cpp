#include <iostream>
using namespace std;
int main(){
    long long int k, n, w, sum=0, dll=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        sum+=i*k;
    }
    dll=sum-n;
    if(dll<=0){
        dll=0;
    }
    cout<<dll;
    return 0;
}