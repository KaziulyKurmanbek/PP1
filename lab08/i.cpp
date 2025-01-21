#include <stack>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        bool exist=false;
        string s;
        cin>>s;
        v.push_back(s);
        for(int j=i-1; j>=0; j--){
            if(v[i]==v[j]){
                exist=true;
                break;
            }
        }
        if(!exist){
            cout<<"new user added\n";
        }else{
            cout<<"user already exists\n";
        }
    }
}