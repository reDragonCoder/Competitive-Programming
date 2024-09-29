#include <iostream>

using namespace std;

int main(){
    int m[5][5], mov=0, iV=0, jV=0, t=0;
    unsigned int iT=0, jT=0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>m[i][j];
            if(m[i][j]==1){
                iV=i+1;
                jV=j+1;
            }
        }
    }

    iT=abs(iV-3);
    jT=abs(jV-3);

    t=iT+jT;

    cout<<t;

    return 0;
}