#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    set<int> s;
    vector<int> v;
    set<int> :: iterator it;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
        s.insert(a);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            sum+=s.count(v[i]^v[j]);
        }
    }
    cout<<sum<<endl;
}