#include <iostream>
using namespace std;
bool compare(string s, string s1){
    if(s.size()!=s1.size()){
        return false;
    }
    char ss, ss1;
    for(int i=0 ;i<s.size(); i++){
        ss=toupper(s[i]);
        ss1=toupper(s1[i]);
        if(ss!=ss1){
            if(ss=='P' && ss1=='B') continue;
            if(ss=='B' && ss1=='P') continue;
            if(ss=='E' && ss1=='I') continue;
            if(ss=='I' && ss1=='E') continue;
        }else{
            continue;
        }
        return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s,s1;
        cin>>s>>s1;
        if(compare(s, s1)==true) cout<<"Yes"<<endl;
        if(compare(s, s1)==false) cout<<"No"<<endl;
    }
}