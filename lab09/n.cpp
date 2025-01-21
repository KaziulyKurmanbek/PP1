#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v1;
    vector<int> :: iterator it1;
    vector<int> v2;
    vector<int> :: iterator it2;
    vector<int> v;
    vector<int> :: iterator it;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    it1=unique(v1.begin(), v1.end());
    v1.erase(it1, v1.end());

    for(int i=0; i<m; i++){
        int a;
        cin>>a;
        v2.push_back(a);
    }
    it2=unique(v2.begin(), v2.end());
    v2.erase(it2, v2.end());

    int i;
    int min_size = min(v1.size(), v2.size());
    for(i=0; i< min_size ; i++){
        v.push_back(v1[i]);
        v.push_back(v2[i]);
    }

    while(i < v1.size()) {
        v.push_back(v1[i]);
        ++i;    
    }
    while(i < v2.size()) {
        v.push_back(v2[i]);
        ++i;  
    }

    it=unique(v.begin(), v.end());
    v.erase(it, v.end());

    for(i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}