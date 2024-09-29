#include <iostream>

using namespace std;

int main(){
    long int a, b, result;
    char s;

    cin>>a>>s>>b;

    if(s=='+'){
        cout<<a+b;
    }else if(s=='-'){
        cout<<a-b;
    }else if(s=='*'){
        cout<<a*b;
    }else if(s=='/'){
        cout<<a/b;
    }

    return 0;
}