#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
    stack<char> st;
    char a;
    while(cin>>a){
        if(st.empty()){
            st.push(a);
        }else{
            if(st.top()==a){
                st.pop();
            }else{
                st.push(a);
            }
        }
    }
    if(st.empty()){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}