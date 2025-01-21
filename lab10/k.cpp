#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    set<int> ::iterator it;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    it=s.end();
    cout<<*(--it)<<endl;
    return 0;
}