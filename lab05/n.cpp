#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    string str1, str2;
    int h=1;
    cin>>str1;
    str2=str1;
    reverse(str2.begin(),str2.end());
    for(int i=0; i<str1.size(); i++){
        if(str1[i]!=str2[i]){
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