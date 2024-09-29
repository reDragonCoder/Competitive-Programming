#include <iostream>

using namespace std;

int main(){
    int n, size=0;
    string orgWord, newWord;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>orgWord;
        size=orgWord.size();
        if(size>10){
            newWord=orgWord[0]+to_string(size-2)+orgWord[size-1];
            cout<<newWord<<endl;
        }else{
            cout<<orgWord<<endl;
        }
      
    }

    return 0;
}