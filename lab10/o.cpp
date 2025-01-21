#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> :: iterator it;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    it=unique(v.begin(), v.end());
    v.erase(it, v.end());
    for(int i=0; i<v.size(); i++){
        cout<<i+1<<" "<<v[i]<<endl;
    }
    return 0;
}