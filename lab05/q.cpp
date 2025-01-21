#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            cout<<str[i];
        }
        if(str[i]>='a' && str[i]<='z'){
            cout<<str[i];
        }
    }
    return 0;
}