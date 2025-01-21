#include <stack>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    stack<char> st;
    string number;
    cin>>number;
    for(int i=0; i<number.size(); i++){
        if(st.empty()){
            st.push(number[i]);
        }else{
            if(number[i]=='1' && st.top()=='1'){
                st.pop();
            }else{
                st.push(number[i]);
            }
        }
    }
    string ans;
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
}