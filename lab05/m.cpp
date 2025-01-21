#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    string str;
    int h=1;
    cin>>str;
    for(int i=1; i<str.size(); i++){
        if(str[i-1]<=str[i]){
            h=1;
        }else{
            h=0;
            break;
        }
    }
    if(h==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
