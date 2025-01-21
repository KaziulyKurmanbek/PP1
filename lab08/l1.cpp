#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n; 
    cin>>n;
    vector< pair<int,int> >v;
    map<int, queue<int> > m;
    map<int, queue<int> > ::iterator it;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        // if(i + 1 == 167 || i + 1 == 273) {
        //     cout << "--------------\n";
        //     cout << i + 1 << endl;
        //     cout << a << ' ' << b << endl;
        // }
        // cout << "--------------\n";
        // cout << i + 1 << endl;
        // cout << a << ' ' << b << endl;
        // if(m.find(a+b)==m.end()){
        //     m[a+b].push(i+1);
        //     v.push_back(make_pair(a,b));
        // }
        m[a+b].push(i+1);
        v.push_back(make_pair(a,b));
        
    }
    for(it=m.begin(); it!=m.end(); ++it){
        queue<int> st = it->second;
        while(!st.empty()) { // output queue
            cout<<st.front()<<" ";
            st.pop();
        }
        // cout<<it->second<<" ";
    }
}