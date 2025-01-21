#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    map<string,int> subs;
    map<string,int> :: iterator it;
    for(int i=0; i<n; i++){
        string name;
        cin>>name;
        ++subs[name];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        string name;
        cin>>name;
        ++subs[name];
    }
    for(it=subs.begin(); it!=subs.end(); it++){
        if(it->second==1){
            cout<<it->first<<endl;
        }
    }
}