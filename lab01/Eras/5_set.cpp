#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> st;
    for(int i=0; i<s.size(); ++i){
        st.insert(s[i]);
    }
    cout<<st.size()<<endl;
    return 0;
}