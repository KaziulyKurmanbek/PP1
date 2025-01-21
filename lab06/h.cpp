#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool sol(string a){
    for(int i=0; i<a.size();i++){
        int k=a[i]-'0';
        if(k%2==1){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    if(sol(s)){
        cout<<"Valid";
    }else{
        cout<<"Not valid";
    }
}