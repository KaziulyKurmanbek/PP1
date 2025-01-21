#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    vector<int>v;
    int n;
    while(cin>>n){
        if(n==0) break;
        v.push_back(n);
    }
    if(v.size()%2==0){
    for(int i=0; i<ceil(v.size()/2); i++){
        cout<<v[i]+v[v.size()-i-1]<<" ";
    }}else{
        for(int i=0; i<v.size()/2; i++){
            cout<<v[i]+v[v.size()-i-1]<<" ";
        }
        cout<<v[ceil(v.size()/2)];
    }
}