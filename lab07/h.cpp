#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void input(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
}
int compare( vector<int> v){
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i+=2){
        if(v[i]!=v[i+1]){
            return v[i];
        }
    }
    return v[v.size()-1];
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    input(v);
    cout<<compare(v);
}