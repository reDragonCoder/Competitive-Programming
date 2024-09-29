#include <iostream>

using namespace std;

int main(){
    int n, x=0;
    string exp;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>exp;
        if(exp=="X++" || exp=="++X"){
            x++;
        }
        if(exp=="--X" || exp=="X--"){
            x--;
        }
    }

    cout<<x;

    return 0;
}