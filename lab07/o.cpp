#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> sum;
    vector<int> v;
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0; i<v.size()-1; i++){
        int summa=v[i]+v[i+1];
        sum.insert(summa);
    }
    cout<<sum.size();
}