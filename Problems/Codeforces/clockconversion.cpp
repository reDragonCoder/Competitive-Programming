#include <iostream>
using namespace std;

int main(){
    int t, hr1, hr2, hr, hrT;
    string s;

    cin>>t;

    for(int i=0; i<t; i++){    
        cin>>s;
        hr1=s[0]-'0';
        hr1*=10;
        hr2=s[1]-'0';
        hr=hr1+hr2;
        if(hr<12){
            if(hr==0){
                s[0]='1';
                s[1]='2';
            }
            if(hr>0 && hr<10){
                s[0]='0';
                s[1]=hr+'0';
            }
            if(hr>=10){
                s[0]='1';
                s[1]=hr2+'0';
            }
            cout<<s<<" "<<"AM"<<endl;
        }else if(hr>=12){
            if(hr==12){
                s[0]='1';
                s[1]='2';
            }
            if(hr>12){
                hr-=12;
                if(hr<10){
                    s[0]='0';
                    s[1]=hr+'0';
                }
                if(hr==10){
                    s[0]='1';
                    s[1]='0';
                }
                if(hr>10){
                    s[0]='1';
                    hr/=10;
                    s[1]=hr+'0';
                }
            }
            cout<<s<<" "<<"PM"<<endl;
        }
    }

    return 0;
}