#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    set<int> s;
    set<int> :: iterator it;
    int n;
    while(cin>>n){
        if(s.find(n)!=s.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
            s.insert(n);
        }
    }
}