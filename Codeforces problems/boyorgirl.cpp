#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string username;
    cin>>username;
    char letters[username.size()], target;
    int ans=0, c=0;
    bool exists;
    for(int i=0; i<username.size(); i++){
        letters[i]='0';
    }
    for(int i=0; i<username.size(); i++){
        target=username[i];
        exists=find(letters, letters+username.size(), target)!=letters+username.size();
        if(!exists){
            letters[c]=target;
            c++;
        }
    }
    for(int i=0; i<username.size(); i++){
        if(letters[i]!='0'){
            ans++;
        }
    }
    if(ans%2==0){
        cout<<"CHAT WITH HER!";
    }else if(ans%2!=0){
        cout<<"IGNORE HIM!";
    }
    return 0;
}