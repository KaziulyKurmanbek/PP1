#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
void out(set<int> s1, set<int> s2){
    set<int> ::iterator it;
    for(it=s1.begin(); it!=s1.end(); it++){
        if(s2.find((*it))!=s2.end()){
            cout<<(*it)<<" ";
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    set<int> s1;
    set<int> s2;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        s1.insert(a);
    }
    for(int i=0; i<m; i++){
        int a;
        cin>>a;
        s2.insert(a);
    }
    if(s1.size()<s2.size()){
        out(s1,s2);
    }else{
        out(s2,s1);
    }
    return 0;
}