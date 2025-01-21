#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void sol(string s){
    string vowels="AaOoIiUuEe";
    for(int i=0; i<s.size(); i++){
        if(vowels.find(s[i])==string::npos){
            cout<<s[i];
        }
    }
}
int main(){
    string s;
    getline(cin,s);
    sol(s);
}