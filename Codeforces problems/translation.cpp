#include <iostream>

using namespace std;

int main(){
    string s, t;
    int j=0;
    bool fg=true;

    cin>>s;
    cin>>t;

    j=s.size()-1;

    if(s.size()!=t.size()){
        fg=false;
    }else{
        for(int i=0; i<s.size(); i++){
            if(s[i]==t[j]){
                j--;
            }else if(s[i]!=t[j]){
                fg=false;
                j--;
            }
        }
    }


    if(fg==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
}