#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    set<int> s;
    set<int> :: iterator it;
    for(int i=0; i<n+m; i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    for(it=s.begin(); it!=s.end(); it++){
        cout<<(*it)<<" ";
    }
    return 0;
}