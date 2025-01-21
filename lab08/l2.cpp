#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n; 
    cin>>n;
    vector< pair<int,int> >v;
    map<int, int > m;
    map<int, int > ::iterator it;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        m[a+b]=i+1;
        v.push_back(make_pair(a,b));
    }
    for(it=m.begin(); it!=m.end(); ++it){
        cout<<it->second<<" ";
    }
}
