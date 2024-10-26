#include <iostream>

using namespace std;

int main(){
    string s;
    int comb=0, k=0;


    cin>>s;
    int size=s.size()+1;

    for(int i=1; i<=size; i++){
        comb=25*size;
        comb+=1;
    }

    cout<<comb;

    return 0;
}