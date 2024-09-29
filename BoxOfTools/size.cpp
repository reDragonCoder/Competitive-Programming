//Size String Function Example

#include <iostream>

using namespace std;

int main(){
    string s;
    int size=0;

    getline(cin, s);

    size=s.size();
    cout<<size;

    return 0;
}