#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;

    for(int j=1; j<=t; j++){

    string str;
    cin>>str;
    if(str.size() < 10) continue;
    string str1(str, str.size()-10, str.size());
    string str2(str, 0, str.size()-10);

    if(str1=="@gmail.com"){
        cout<<str2<<endl;
    }

    }
    return 0;
}