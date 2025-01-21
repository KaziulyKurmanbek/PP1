#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> s;
    map<string, int> ::iterator it;
    for(int i=0; i<n; i++){
        string a,b;
        cin>>a>>b;
        ++s[a];
    }
    for(it=s.begin(); it!=s.end(); it++){
        if(it->second<=3){
            cout<<it->first<<" is valid"<<endl;
        }else{
            cout<<it->first<<" is hacked"<<endl;
        }
    }
    return 0;
}