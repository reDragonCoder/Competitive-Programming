//Two Utility Cases --> toupper & tolower Functions Example

#include <iostream>

using namespace std;

int main(){
    char c;

    cin>>c;

    //ASCII conversions
    cout<<tolower(c)<<endl;
    cout<<toupper(c)<<endl;

    cout<<endl;

    //char type conversions
    c=tolower(c);
    cout<<c<<endl;
    c=toupper(c);
    cout<<c<<endl;

    return 0;
}