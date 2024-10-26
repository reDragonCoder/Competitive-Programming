#include <iostream>

using namespace std;

int main(){
    long long int n=0, m=0, a=0, h=0, hI=1, b=0, bI=1, fs=0; 

    cin>>n>>m>>a;

    if(n==m){
        h=a;
        while(h<n){
            h+=a;
            hI++;
        }
        fs=hI*hI;
        cout<<fs;
    }else if(n!=m){
        h=a;
        while(h<n){
            h+=a;
            hI++;
        }

        b=a;
        while(b<m){
            b+=a;
            bI++;
        }
        fs=hI*bI;
        cout<<fs;
    }

    return 0;
}

