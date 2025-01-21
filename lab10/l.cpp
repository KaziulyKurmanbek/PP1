#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> s;
    map<int, int> ::iterator it;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        ++s[a];
    }
    it=s.end();
    cout<<((--(--it))->second)<<endl;
    return 0;
}