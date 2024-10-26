#include <iostream>

using namespace std;

int main(){
    int n;
    bool hard=false;

    cin>>n;

    int opinions[n];

    for(int i=0; i<n; i++){
        cin>>opinions[i];
        if(opinions[i]==1){
            hard=true;
        }
    }

    if(hard==false){
        cout<<"EASY";
    }else if(hard==true){
        cout<<"HARD";
    }

    return 0;
}