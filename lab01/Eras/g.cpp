#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    stack<char> st;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
        }else{
            if(st.top()=='1' && s[i]=='1' ){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    }
    vector<char> ot; //==string ot;
    while(!st.empty()){
        ot.push_back(st.top());
        st.pop();
    }
    reverse(ot.begin(), ot.end());
    for(int i=0; i<ot.size(); i++){
        cout<<ot[i];
    }
    return 0;
}