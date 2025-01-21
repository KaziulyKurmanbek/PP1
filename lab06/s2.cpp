#include <iostream>
#include <string>
using namespace std;
string digits[10]={
    "ZER",
    "ONE",
    "TWO",
    "THR",
    "FOU",
    "FIV",
    "SIX",
    "SEV",
    "EIG",
    "NIN",
};
int numbers(string s){
    string w;
    for(int i=0; i<s.size(); i+=3){
        string q(s,i,3);
        for(int j=0; j<10; j++){
            if(q==digits[j]){
                w+=char(j+'0');
            }
        }
    }
    int a;
    return atoi(w.c_str());
}
string intTOstring(int n){
    string word=to_string(n);
    string e;
    for(int i=0; i<word.size(); i++){
        int l= word[i]-'0';
        e+=digits[l];
    }
    return e;
}
int main(){
    string s;
    cin>>s;
    int k;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*'){
            k=i;
        }
    }
    string s1=s.substr(0,k);
    string s2=s.substr(k+1);
    char opertor=s[k];
    int res;
    if(opertor=='+') res=numbers(s1)+numbers(s2);
    if(opertor=='-') res=numbers(s1)-numbers(s2);
    if(opertor=='*') res=numbers(s1)*numbers(s2);
    cout<<intTOstring;
}