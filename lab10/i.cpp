#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<*(s.begin())<<endl;
    return 0;
}