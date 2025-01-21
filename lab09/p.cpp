#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
string toBin(int a){
    string s;
    while(a>0){
        s+=to_string(a%2);
        a/=2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
       int a;
       cin>>a;
       v.push_back(a);
    }
    for(int i=0; i<v.size(); i++){
        cout<<toBin(v[i])<<endl;
    }
    return 0;
}