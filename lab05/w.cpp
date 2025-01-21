#include <iostream>
#include <string>

using namespace std;

int main() {
    string s,t;
    int q=0;
    cin>>s>>t;
    for(int i=0; i<s.size(); ++i){
        string s1(s,i,t.size());
        if(s1==t){
            q=1;
            break;
        }
    }
    if(q==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
