#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    stack<int> st;
    vector<int> v;
    for(int i=0; i<n; i++){
        long a;
        cin>>a;
        if(a==0){
            v.push_back(st.top());
            st.pop();
        }else{
            st.push(a);
        }
    }
    if(v.empty()){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}