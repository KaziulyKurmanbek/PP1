#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void sol(string s, int n ){
    int sum=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            sum++;
        }
    }
    if(sum>=n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    sol(s, n);
}