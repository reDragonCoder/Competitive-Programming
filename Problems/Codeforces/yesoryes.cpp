#include <iostream>
#include <string>

using namespace std;

int main(){
    long int t; 
    int j=0; 
    string s;

    cin>>t;

    for(int i=0; i<t; i++){
        cin>>s;
        for(int i=0; i<3; i++){
            s[i]=tolower(s[i]);
        }
        if(s=="yes"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;   
}