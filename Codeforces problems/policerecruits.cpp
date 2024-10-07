#include <iostream>
using namespace std;

int main() {
    long int n, crimes=0, policeOff=0;
    cin>>n;
    long int events[n];
    for(int i=0; i<n; i++){
        cin>>events[i];
    } 
    for(int i=0; i<n; i++){
        if(events[i]==-1){
            if((i==0 || events[i-1]==-1) && policeOff==0){
                crimes++;
            }else{
                policeOff--;
            }
        }
        if(events[i]!=-1){
            policeOff+=events[i];
        }
    }
    cout<<crimes;
    return 0;
}