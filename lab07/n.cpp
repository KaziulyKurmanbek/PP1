#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        s.insert(q);
    }
    if(s.size()==n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}