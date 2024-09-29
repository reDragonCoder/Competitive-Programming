#include <iostream>
using namespace std;

int main() {
    int n, a, b, op=0, minCap=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(i==0){
            op=abs(a-b);
            minCap=op;
        }else{
            op=op-a+b;
            if(op>minCap){
                minCap=op;
            }
        }
    }
    cout<<minCap;
    return 0;
}