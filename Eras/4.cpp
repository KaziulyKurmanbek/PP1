#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
        cin>>v[i];
    }
    sort(v.rbegin(), v.rend());
    //reverse(v.begin(), v.end());
    int num;
    cin>>num;
    for(int i=0; i<v.size(); i++){
        if(v[i]<num){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<v.size()+1<<endl;
    return 0;
}