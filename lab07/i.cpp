#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        v.push_back(k);
        bool re=true;
        for(int j=0; j<i; j++){
            if(v[j]==k){
                re=false;
                break;
            }
        }
        if(re==false){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}