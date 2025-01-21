#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    set<string> s;
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            s.insert(str);
        }else{
            v.push_back(str);
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}