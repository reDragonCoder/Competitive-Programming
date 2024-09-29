//Greatest Comun Divisor Example

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, h, turn=1, temp=0;
    
    cin>>a>>b>>h;

    while(h>0){
        if(turn==1 || turn%2!=0){
            temp=__gcd(a, h);
            h=h-temp;
            turn++;
        }else if(turn%2==0){
            temp=__gcd(b, h);
            h=h-temp;
            turn++;
        }
    }

    if(turn==1 || turn%2!=0){
        cout<<'1';
    }else if(turn%2==0){
        cout<<'0';
    }

    return 0;
}
