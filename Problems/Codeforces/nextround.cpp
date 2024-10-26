#include <iostream>
using namespace std;

int main(){
    int n, k, kn=0, c=0;
    int vec[100];
    cin>>n>>k;
    k--;
    for(int i=0; i<n; i++){
        cin>>vec[i];
        if(i==k){
            kn=vec[i];
        }
    }
    for(int i=0; i<n; i++){
        if(vec[i]>=kn && vec[i]!=0){
            c++;
        }
    }
    cout<<c;
    return 0;
}