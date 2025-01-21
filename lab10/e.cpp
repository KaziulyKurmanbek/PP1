#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
bool uniq(vector<int> v){
    for(int i=0; i<v.size()-1; i++){
        if(v[i]==v[i+1]){
            return false;
        }
    }
    return true;
}
bool next(vector<int> v){
        do{
        if(uniq(v)){
            return true;
        }
    }while(next_permutation(v.begin(), v.end()));
    return false;
}
bool prev(vector<int> v){
        do{
        if(uniq(v)){
            return true;
        }
    }while(prev_permutation(v.begin(), v.end()));
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int> v2 = v;
    if(next(v) || prev(v2)){
        cout<<"Possible"<<endl;
    }else{
        cout<<"Impossible"<<endl;
    }
    return 0;
}
