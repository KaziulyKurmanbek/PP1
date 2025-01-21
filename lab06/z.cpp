#include <iostream>
using namespace std;
void output(string s){
    for(int i=0; i<s.size(); i++){
        cout<<s[i];
    }
}
int compare( string s){ 
    if(s.size()==1){
        if(s[0]=='1') return 1;
        if(s[0]=='0') return 0;
        else{
            return 2;
        }
    }else{
        return 2;
    }
}
int main(){
    string s;
    cin>>s;
    if(compare(s)==1) cout<<"true";
    if(compare(s)==0) cout<<"false";
    if(compare(s)==2) output(s);
}