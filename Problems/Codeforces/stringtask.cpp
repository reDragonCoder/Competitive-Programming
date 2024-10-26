#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, aux, aux2, r;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        aux+=tolower(s[i]);
    }
    for(int i=0; i<s.size(); i++){
        if(aux[i]!='a' && aux[i]!='o' && aux[i]!='y' && aux[i]!='e' && aux[i]!='u' && aux[i]!='i'){
            aux2+=aux[i];
        }
    }
    for(int i=0; i<aux2.size(); i++){
        r+='.';
        r+=aux2[i];
    }
    cout<<r;
    return 0;
}