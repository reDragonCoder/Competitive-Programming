// Author: reDragonCoder

// If we list all the natural numbers below 10 that are multiples of
// 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main(){
    int n=10, sum=0;
    cout<<"Enter the n value (sum starts below n): ";
    cin>>n;

    for(int i=1; i<n; i++){
        if(i%3==0){
            sum+=i;
        }else if(i%5==0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}