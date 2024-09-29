#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int a, b, i=1;
    bool fg=false;

    cin>>a>>b;
    std::vector<int> vec={a,b};
    while(fg==false){
        auto it=std::find(vec.begin(), vec.end(), i);
        if(it!=vec.end()){
            i++;
        }else{
           fg=true; 
        }
    }
    cout<<i;

    return 0;
}