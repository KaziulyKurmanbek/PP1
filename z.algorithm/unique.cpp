#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>v;
    vector<int>:: iterator it;
    
    while(n>0){

        int x;
        cin>>x;
        v.push_back(x);

        --n;
    }

    it=unique(v.begin(), v.end());
    v.erase(it, v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}