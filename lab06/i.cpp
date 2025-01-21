#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void sol(string a){
    for(int i=0; i<a.size();i++){
        if(a[i]>='a' && a[i]<='z' && i%2==0){
            cout<<char(a[i]-32);
        }else{
            cout<<a[i];
        }
    }
}
int main(){
    string s;
    cin>>s;
    sol(s);
}