#include <iostream>
#include <string>
using namespace std;
string sum(string s){
    int sum=0;
    for(int i=0; i<s.size(); i++){
        sum+=s[i]-'0';
    }
    if(sum%(s[s.size()-1]-'0')==0){
        return "Yes";
    }
    return "No";
}
int main(){
    string s;
    cin>>s;
    cout<<sum(s);
}