#include <bits/stdc++.h>
using ull=unsigned long long;
using ll=long long;
using namespace std;
int main(){
    int num[4];
    for(int i=0; i<4; i++){
        cin>>num[i];
    }
    sort(num, num+4);
    if(num[0]==num[1]){
        if(num[2]==num[3]){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }else{
        cout<<"NO";
    }
    return 0;
}