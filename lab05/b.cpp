#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    int suma=0;
    int sumA=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            suma++;
        }
        if(s[i]>='A' && s[i]<='Z'){
            sumA++;
        }
    }
    cout<<suma<<" "<<sumA<<endl;
    return 0;
}