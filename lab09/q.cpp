#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> :: iterator it;
    for(int i=0; i<n; i++){
       int a;
       cin>>a;
       v.push_back(a);
    }
    it=unique(v.begin(), v.end());
    v.erase(it, v.end());
    for(int i=0; i<v.size(); i++){
       cout<<v[i]<<" ";
    }
    return 0;
}