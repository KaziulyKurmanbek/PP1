#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='z'){
            str[i]='`';
        }
        cout<<char(str[i]+1);
    }
    return 0;
}