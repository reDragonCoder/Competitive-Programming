#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0, sum=0;
    cin>>n;
    int matrix[n][n];
    int i=0, j=0;
    for(int i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    // Diagonal principal: i=j
    // Diagonal secundaria: i+j=n-1
    
    if(n<=3){
        for(int i=0; i<n; i++){
            for(j=0; j<n; j++){
                sum+=matrix[i][j];
            }
        }
    }else if(n>=5){
        for(int i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i==j){
                    sum+=matrix[i][j];
                }else if(i+j==n-1){
                    sum+=matrix[i][j];
                }else if(i==n/2){
                    sum+=matrix[i][j];
                }else if(j==n/2){
                    sum+=matrix[i][j];
                }else{
                    continue;
                }
            }
        }
    }
    
    cout<<sum;
    return 0;
}