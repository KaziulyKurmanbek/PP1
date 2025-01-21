#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    set<int>s;
    while(cin>>n){
        s.insert(n);
    }
    cout<<s.size();
    // set<int>::iterator it;
    // for(it=s.begin(); it != s.end(); it++){
    //     cout<<*it<<' ';
    // }
}