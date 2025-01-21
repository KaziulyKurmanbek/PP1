#include <stack>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    map<string,int> :: iterator it;
    for(int i=0; i<n; i++){
        string name;
        int series;
        cin>>name;
        cin>>series;
        m[name]+=series;
    }
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}