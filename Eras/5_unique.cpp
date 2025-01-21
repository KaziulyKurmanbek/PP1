#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0; i<s.size(); ++i){
        v.push_back(s[i]);
    }
    vector<char> :: iterator it;
    sort(v.begin(), v.end());
    it=unique(v.begin(), v.end());
    v.erase(it, v.end());
    cout<<v.size()<<endl;
    return 0;
}