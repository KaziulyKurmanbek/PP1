#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int n;
    cin>>n;
    int sumX=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==x){
            sumX++;
        }
    }
    if(sumX==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}