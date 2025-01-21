#include <iostream>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;
bool cmp_dec(int a, int b){
    return a>b;
}
bool cmp_inc(int a, int b){
    return a<b;
}
int main(){
    int n;
    cin>>n;
    vector<int> v1;
    vector<int> v0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a%2==0) v0.push_back(a);
        if(a%2==1) v1.push_back(a);
    }
    sort(v0.begin(), v0.end(), cmp_dec);
    sort(v1.begin(), v1.end(), cmp_inc);
    int a=0, b=0;
    for(int i=0; i<v0.size(); i++){
        cout<<v0[i]<<" ";
    }
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
}