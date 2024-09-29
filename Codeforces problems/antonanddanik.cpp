#include <iostream>
using namespace std;

int main(){
    int n=0, a=0, d=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; ++i){
        if(s[i]=='A'){
            a++;
        }
        if(s[i]=='D'){
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    if(a<d){
        cout<<"Danik";
    }
    if(a==d){
        cout<<"Friendship";
    }

    return 0;
}