#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int ai(int ki){
    return ki | (ki+1);
}
int bi(int ki){
    return ki & (ki+2);
}
int ci(int ki){
    return ki xor (ki+3);
}
int main(){
    int n;
    cin>>n;
    vector<int> k(n);
    for(int i=0; i<n; i++){
        cin>>k[i];
        cout<<ai(k[i])<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<bi(k[i])<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<ci(k[i])<<" ";
    }
    cout<<endl;
}