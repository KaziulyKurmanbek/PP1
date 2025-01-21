#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
void out(pair<string, int> p){
    cout<<p.first<<" : "<<p.second<<endl;
}
bool cmp(pair<string, int> p1, pair<string, int> p2){
    if(p1.second!=p2.second){
        return p1.second>p2.second;
    }else{
        return p1.first<p2.first;
    }
}
int main(){
    string s;
    map<string, int> m;
    map<string, int>:: iterator it;
    while(cin>>s){
        ++m[s];
    }
    vector<pair<string, int> > v;
    vector<pair<string, int> > :: iterator itv;
    for(it=m.begin(); it!=m.end(); it++){
        v.push_back(make_pair(it->first, it->second));
    }
    sort(v.begin(), v.end(), cmp);
    for_each(v.begin(), v.end(), out);
}