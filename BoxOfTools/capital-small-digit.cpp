//isdigit, isalpha & isupper Functions Example

#include <iostream>

using namespace std;

int main(){
    char x;

    cin>>x;

    if(isdigit(x)){
        cout<<"IS DIGIT";
    }else if(isalpha(x)){
        cout<<"ALPHA"<<endl;
        if(isupper(x)){
            cout<<"IS CAPITAL";
        }else{
            cout<<"IS SMALL";
        }
    }

    return 0;
}