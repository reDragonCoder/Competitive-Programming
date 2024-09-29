#include <iostream>

using namespace std;

int main(){
    int n, sure, submit=0, votes=0;

    cin>>n;

    int problems[n][3];

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>sure;
            if(sure==1){
                votes++;
            }
        }
        if(votes>=2){
            submit++;
        }
        votes=0;
    }

    cout<<submit;

    return 0;
}