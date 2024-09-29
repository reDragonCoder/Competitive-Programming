#include <iostream>

using namespace std;

int main(){
    int t, winner=0;
    long long int a, b;

    cin>>t;
    while(t--){
        cin>>a>>b;
        winner=a+b;
        if(winner%2==0){
            cout<<"Bob"<<endl;
        }else if(winner%2!=0){
            cout<<"Alice"<<endl;
        }
    }

    return 0;
}