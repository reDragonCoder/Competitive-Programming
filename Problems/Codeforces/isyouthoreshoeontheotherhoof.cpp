// Author: reDragonCoder

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s[4], temp[4], target=0, c=0, ans=0;
    for(int i=0; i<4; i++){
        cin>>s[i];
    }
    for(int i=0; i<4; i++){
        temp[i]=0;
    }
    for(int i=0; i<4; i++){
        target=s[i];
        if(find(temp, temp+c, s[i])==temp+c){
            temp[c]=s[i];
            c++;
        }
    }
    ans=4-c;
    cout<<ans;
    return 0;
}