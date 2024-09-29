#include <iostream>

using namespace std;

int main(){
    int n, counter=0;
    string mag1, mag2;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>mag1;
        if(mag1[1]==mag2[0]){
            counter++;
        }
        mag2=mag1;
    }

    cout<<counter+1;

    return 0;
}