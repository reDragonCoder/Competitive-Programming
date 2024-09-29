#include <iostream>
using namespace std;

int main(){
    int t=0, n=0, a=0, b=0, sum=0;

    cin>>t;
    for(int i=0; i<t; i++){
        sum=0;
        cin>>n;
        a=n/10;
        b=n%10;
        sum=a+b;
        cout<<sum<<endl;
    }
    return 0;
}