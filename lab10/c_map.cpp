#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, string> m;
    map<string, string> :: iterator it;
    for(int i=0; i<n;i++){
        string word, trs;
        cin>>word>>trs;
        m[word]=trs;
    }
    string s;
    cin>>s;
    for(it=m.begin(); it!=m.end(); it++){
        if(it->first!=s){
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
}