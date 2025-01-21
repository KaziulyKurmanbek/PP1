#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
string to_binary(int a) {
    string str;
    while (a > 0) {
        str += to_string(a % 2);
        a /= 2;
    }
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        stack<char> st;
        int a;
        cin >> a;
        while (a > 0) {
            int q=a%2;
            if (!st.empty() && st.top() == 0 && q == 1) {
                st.pop(); 
            } else {
                st.push(q); 
            }
            a/=2;
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        if(sum==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
