#include <iostream>
using namespace std;

int main(){
    int x1, x2, x3, distance=0, temp1=0, small=0, med=0, big=0;
    int order[3];
    cin>>x1>>x2>>x3;
    order[0]=x1;
    order[1]=x2;
    order[2]=x3;
    small=x1;
    med=x2;
    big=x3;
    for(int i=0; i<3; i++){
        if(order[i]<small){
            small=order[i];
        }
    }
    for(int i=0; i<3; i++){
        if(order[i]>big){
            big=order[i];
        }
    }
    for(int i=0; i<3; i++){
        if(order[i]!=small && order[i]!=big){
            med=order[i];
        }
    }
    distance=big-med;
    distance+=med-small;
    cout<<distance;
    return 0;
}