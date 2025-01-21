#include <stack>
#include <iostream>
using namespace std;
int main(){
    stack<char> st;
    string brackets;
    cin>>brackets;
    for(int i=0; i<brackets.size(); i++){
        if(st.empty()){
            if(brackets[i]==')'){
                cout<<"NO\n";
                return 0;
            }else{
                st.push(brackets[i]);
            }
        }else{
            if(brackets[i]==')'){
                st.pop();
            }else{
                st.push(brackets[i]);
            }
        }
    }
    if(st.empty()){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}