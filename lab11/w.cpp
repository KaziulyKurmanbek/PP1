#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int i=0;
bool user(string s, int i){
    if(i==s.size()) return true;
    if((s[i]<'A' || s[i]>'Z')){
        if((s[i]<'a' || s[i]>'z')){
            return false;
        }
    }
    i++;
    return user(s,i);
}
int main(){
    string s;
    cin>>s;
    if(user(s,i)) cout<<"Valid username"<<endl;
    else cout<<"Wrong username"<<endl;
}