#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int x, steps=0;
    cin>>x;

    steps=x/5;
    if(x%5!=0){
        steps+=1;
    }

    cout<<steps;

    return 0;
}