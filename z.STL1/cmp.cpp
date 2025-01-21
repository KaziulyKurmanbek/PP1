#include <set>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(int a, int b){
    if(a>b)return true;
    if(a<b)return false;
}
int main(){
    //cmp деген ол-comporator
    vector<int> v;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<"___________________________________"<<endl;
    sort(v.begin(),v.end(),cmp);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}