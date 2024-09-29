#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k, l=0, tempN=0, tempK=0;
    cin>>n>>k;
    tempN=n-1;
    tempK=k-tempN;
    l=floor(tempK/n);
    cout<<l;
    return 0;
}