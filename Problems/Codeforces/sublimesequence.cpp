#include <bits/stdc++.h>
using ull=unsigned long long;
using ll=long long;
using namespace std;
int main(){
    int tc=0;
    cin>>tc;
    int n, x;
    int sum=0;
    while(tc--){
        cin>>x>>n;
        for(int i=1; i<=n; i++){
            if(i%2!=0){
                sum+=x;
            }else if(i%2==0){
                sum-=x;
            }
        }
        cout<<sum<<endl;
        n=0;
        x=0;
        sum=0;
    }
    return 0;
}