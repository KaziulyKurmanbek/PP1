#include <set>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    set<int> s;
    set<int> :: iterator it;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    for(it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}