#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, int> m;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        ++m[s];
    }
    cout<<m.size();
}