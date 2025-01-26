#include <bits/stdc++.h>
using ull=unsigned long long;
using ll=long long;
using namespace std;
int main(){
    string s;
    cin>>s;
    int size=s.size();
    if(size==1){
        cout<<s;
    }else{
        int numbers[(size/2)+1];
        char plus[size/2]; 
        int n_pointer=0, p_pointer=0;
        string newS;
        for(int i=0; i<size; i++){
            if(i%2==0){
                numbers[n_pointer++]=s[i]-'0';
            }else{
                plus[p_pointer++]=s[i];
            }
        }
        sort(numbers, numbers+((size/2)+1));
        n_pointer=0;
        p_pointer=0;
        for(int i=0; i<size; i++){
            if(i%2==0){
                newS+=numbers[n_pointer++]+'0';
            }else{
                newS+=plus[p_pointer++];
            }
        }
        cout<<newS;
    }    
    return 0;
}