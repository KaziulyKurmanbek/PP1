#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<int> v;
    for(int i=0; i<s.size(); ++i){
        if(s[i]==' '){
            v.push_back(i);
        }
    }
    //v[v.size()-1]=v.size()-v[v.size()];
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    return 0;
}