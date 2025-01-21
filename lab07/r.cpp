#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <char, int> m;
    map<char, int>:: iterator it;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        set<char> chars(s.begin(), s.end());
        set<char>::iterator it;
        for(it=chars.begin(); it!=chars.end(); ++it){
            ++m[*it];
        }
    }
    bool commonchar=false;
    for(it=m.begin(); it!=m.end(); ++it){
        if(it->second==n){
            cout<<it->first<<" ";
            commonchar=true;
        }
    }
    if(!commonchar){
        cout<<"NO COMMON CHARACTERS";
    }
    return 0;
}