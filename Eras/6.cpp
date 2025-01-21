#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    set<string> s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    set<string> :: iterator it;
    for(it=s.begin();it!=s.end();++it){
        cout<<*it<<" ";
    }
    return 0;
}