#include <stack>
#include <queue>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    stack <pair<string,int> > st;
    int n;
    cin>>n;
    map<string, int> m;
    map<string, int> :: iterator it;
    for(int i=0; i<n; i++){
        string a;
        cin>>a; 
        st.push(make_pair(a,i+1));
    }
    while (!st.empty()) {
        pair<string, int> top = st.top();
        m[top.first] = top.second;
        st.pop();
    }
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}