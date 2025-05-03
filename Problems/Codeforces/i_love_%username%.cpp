#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    int points[n];
    int amazing=0;
    for(int i=0; i<n; i++){
        cin>>points[i];
    }
    int bestscore=points[0], worstscore=points[0];
    for(int i=1; i<n; i++){
        if(points[i]>bestscore){
            amazing++;
            bestscore=points[i];
        }else if(points[i]<worstscore){
            worstscore=points[i];
            amazing++;
        }
    }
    cout<<amazing;
    return 0;
}