#include <iostream>
#include <string>
using namespace std;

// string digits[10] = {
//     "ZER",
//     "ONE",
//     "TWO",
//     //...
// }

char wordTOchar(string s){
    if(s=="ZER") return '0';
    if(s=="ONE") return '1';
    if(s=="TWO") return '2';
    if(s=="THR") return '3';
    if(s=="FOU") return '4';
    if(s=="FIV") return '5';
    if(s=="SIX") return '6';
    if(s=="SEV") return '7';
    if(s=="EIG") return '8';
    if(s=="NIN") return '9';
}
string intTochar(int n){
    if(n==0) return "ZER";
    if(n==1) return "ONE";
    if(n==2) return "TWO";
    if(n==3) return "THR";
    if(n==4) return "FOU";
    if(n==5) return "FIV";
    if(n==6) return "SIX";
    if(n==7) return "SEV";
    if(n==8) return "EIG";
    if(n==9) return "NIN";
}
int numbers(string s){
    string w1,w2;
    int i=0, j;
    while(s[i]!='+' && s[i]!='-' && s[i]!='*'){
        string q(s, i, 3);
        w1+=wordTOchar(q);
        i+=3;
        j=i;
    }
    for(i=j+1; i<s.size(); i++ ){
        string q(s, i, 3);
        w2+=wordTOchar(q);
        i+=3;
    }
    int a,b;
    a = atoi(w1.c_str());
    b = atoi(w2.c_str());
    if(s[j]=='+') return a+b;
    if(s[j]=='-') return a-b;
    if(s[j]=='*') return a*b;
}
int main(){
    string s;
    cin>>s;
    cout<<numbers(s);
}