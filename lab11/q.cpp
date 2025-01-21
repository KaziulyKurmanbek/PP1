#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cheat(vector<int> &v, int k, int i){
    if(i==v.size()) return true;
    if(v[i]-v[i-1]<=k) return false;
    return cheat(v, k, i+1);
}
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> v(n); 
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    if(cheat(v, k, 1)) cout<<"no"<<endl;
    else cout<<"cheater"<<endl;
}