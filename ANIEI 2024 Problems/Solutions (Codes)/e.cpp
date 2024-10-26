#include <iostream>
using namespace std;
int main(){
    int n=0, x=0, count=0, a=0;
    cin>>n>>x;
    for (int i = 0; i < n; i++){
        cin>>a;
        if(a%x==0){
            count++;
        }
    }
    cout<<count;
}