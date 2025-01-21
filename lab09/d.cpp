#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool qq(int a){
    int q=sqrt(a);
    return a==q*q;
}
bool isSquare(char ch1, char ch2){
    int a = (ch1 - '0') * 10 + (ch2 - '0');
    return qq(a);
}
int main(){
    stack<char> st;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
        }else{
            if( isSquare(st.top(), s[i]) ){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    if(st.empty()){
        cout<<"Stack is empty";
        return 0;
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}