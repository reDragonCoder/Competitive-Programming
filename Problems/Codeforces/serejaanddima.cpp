#include <iostream>
using namespace std;

int main() {
    int n, s=0, d=0;
    cin>>n;
    int cards[n];
    for(int i=0; i<n; i++){
        cin>>cards[i];
    }
    int lft=0, rg=n-1;
    bool turn=true;
    for(int i=0; i<n; i++){
        if(cards[lft]>=cards[rg]){
            if(turn)
                s+=cards[lft];
            else
                d+=cards[lft];
            lft++;
        }else{
            if(turn)
                s+=cards[rg];
            else
                d+=cards[rg];
            rg--;
        }
        turn=!turn;
    }
    cout<<s<<" "<<d;
    return 0;
}