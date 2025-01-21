#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool polind(vector<int>v){
    string s,s1;
    for(int i=0; i<v.size(); i++){
        s+=char('0'+v[i]);
    }
    s1=s;
    reverse(s1.begin(), s1.end());
    return s1==s;
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
    sort(v.begin(), v.end());
    do{
        if(polind(v)){
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<' ';
            }
            return 0;
        }
    }while(next_permutation(v.begin(), v.end()));
    cout<<"Impossible"<<endl;
    return 0;
}