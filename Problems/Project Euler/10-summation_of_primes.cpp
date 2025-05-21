// Author: reDragonCoder

// The sum of the primes below 10 is 2+3+5+7=17
// Find the sum of all the primes below two million

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main(){
    long long int sum=0;
    for(long long int i=1; i<2000000; i++){
        if(isPrime(i)){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}