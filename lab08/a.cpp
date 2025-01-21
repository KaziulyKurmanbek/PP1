#include <iostream>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;
bool cdm(pair<int, int> a, pair<int, int> b){
    if(a.first==b.first){
        return a.second<b.second;
    }else{
        return a.first<b.first;
    }
}
int main(){
    int n;
    cin>>n;
    vector< pair <int,int> > v;
    for(int i=0; i<n; i++){
        int k,l;
        cin>>k>>l;
        v.push_back(make_pair(k,l));
    }
    sort(v.begin(), v.end(), cdm);
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}