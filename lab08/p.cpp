#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
int main() {
    int n,q;
    cin>>n;
    stack<int> st;
    for(int i=0; i<n; i++){
        int wiz;
        cin>>wiz;
        if(st.empty()){
            st.push(wiz);
        }else{
            while(!st.empty() && wiz>=st.top()){
                st.pop();
            }
            st.push(wiz);
        }
        cout<<st.size()<<" ";
    }
}