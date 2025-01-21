#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second!=p2.second){
        return p1.second>p2.second;
    }
    return p1.first<p2.first;
}
int main(){
    int n;
    cin>>n;
    map<int, int> m;
    map<int, int> :: iterator it;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        ++m[a];
    }
    vector<pair<int, int> > v;
    for(it=m.begin(); it!=m.end(); it++){
        v.push_back(make_pair(it->first,it->second));
    }
    sort(v.begin(), v.end(), cmp);
    cout<<v[0].first<<endl;
}