#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void output(set<string> s){
    set<string> :: iterator it;
    for(it=s.begin(); it!=s.end(); it++){
        cout<<*it<<endl;
    }

}
bool upper(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            return true;
        }
    }
    return false;
}
bool lower(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            return true;
        }
    }
    return false;
}
bool number(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            return true;
        }
    }
    return false;
}
int main(){
    set<string> password;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        if(upper(str) && lower(str) && number(str)){
            password.insert(str);
        }
    }
    cout<<password.size()<<endl;
    output(password);
}