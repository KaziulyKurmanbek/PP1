#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string rec(string s,string nwst, int i){
    if(i<0) return nwst;
    nwst.push_back(s[i]);
    return  rec(s, nwst, i-1);
}
int main(){
    string s;
    cin>>s;
    string nwst;
    int i=s.size()-1;
    cout<<rec(s, nwst, i)<<endl;
}