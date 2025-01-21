#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    string str1, str2;
    cin>>str1;
    str2=str1;
    reverse(str2.begin(), str2.end());
    int sum=0;
    for(int i=1; i<str1.size(); i++){
        if(str1[i]==str2[i-1]){
            sum++;
        }
    }
    if(sum>=str1.size()-1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}