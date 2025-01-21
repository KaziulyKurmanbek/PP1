#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<string, int>p1, pair<string, int>p2){
    if(p1.second!=p2.second) return p1.second>p2.second;
    return p1.first>p2.first;
}
int main(){
    int n;
    float sum=0;
    cin>>n;
    map<string, float> m;
    for(int i=0; i<n; i++){
        string name;
        float score;
        cin>>name>>score;
        sum+=score;
        m[name]+=score;
    }
    vector<pair<string, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second*100/sum<<"%"<<endl;
    }
}