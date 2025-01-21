#include <iostream>
using namespace std;
int sum1=0;
int sum(string n){
    for(int i=0; i<n.size(); i++){
        sum1+=n[i]-'0';
    }
    return sum1;
}
int main(){
    string s;
    cin>>s;
    cout<<sum(s);
    return 0;
}