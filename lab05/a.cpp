#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    cout<<s<<endl;
    return 0;
}