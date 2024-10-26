#include <iostream>

using namespace std;

int main(){
    string s;
    int upper=0, lower=0, sSize=0;

    cin>>s;

    sSize=s.size();

    for(int i=0; i<sSize; i++){
        if(s[i]>=65 && s[i]<=90){
            upper++;
        } 
        if(s[i]>=97 && s[i]<=122){
            lower++;
        }
    }

    if(upper>lower){
        for(int i=0; i<sSize; i++){
            s[i]=toupper(s[i]);
        }
    }
    if(upper<=lower){
        for(int i=0; i<sSize; i++){
            s[i]=tolower(s[i]);
        }
    }

    cout<<s;

    return 0;
}