#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first<p2.first) return true;
    if(p1.first==p2.first){
        if(p1.second<p2.second) return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int, int> > v;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<n; i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}