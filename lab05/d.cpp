#include <iostream>
using namespace std;
int main(){
    string s;
    string t;
    string k;
    cin>>t>>s;
    k=t;
    int times;
    int ss,st;
    ss=s.size();
    st=t.size();
    times=ss/st;
    for(int i=1; i<times; i++){
        t+=k;
    }
    if(t==s){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}