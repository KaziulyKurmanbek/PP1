#include <iostream>
#include <algorithm>
using namespace std;
string let[16]={"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
string hex(int n){
    string s;
    while(n>0){
        int a;
        s+=let[n%16];
        n/=16;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    string s;
    s=hex(n);
    reverse(s.begin(),s.end());
    cout<<s;
}