#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int todec(string s){
    reverse(s.begin(), s.end());
    int ans=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            ans+=pow(2, i);
        }
    }
    return ans;
}
int main() {
    string s;
    cin>>s;
    cout<<todec(s)<<endl;
    return 0;
}