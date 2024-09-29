#include <iostream>
using namespace std;

int main(){
    long int t;
    int n, k, p, Smoney=0, counter=0;
    cin>>t;
    for(long int i=0; i<t; i++){
        cin>>n>>k;
        int ai[n];
        for(int j=0; j<n; j++){
            cin>>ai[j];
        }
        for(int y=0; y<n; y++){
            if(ai[y]>=k){
                Smoney+=ai[y];
            }
            if(Smoney!=0 && ai[y]==0){
                Smoney--;
                counter++;
            }
        }
        cout<<counter<<endl;
        Smoney=0;
        counter=0;
    }
    return 0;
}