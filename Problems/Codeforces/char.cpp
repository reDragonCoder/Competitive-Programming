#include <iostream>

using namespace std;

int main(){
    char x;

    cin>>x;

    if(isupper(x)){
        x=tolower(x);
    }else if(islower(x)){
        x=toupper(x);
    }

    cout<<x;

    return 0;
}