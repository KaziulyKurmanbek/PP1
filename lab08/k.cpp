#include <stack>
#include <queue>
#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> maxs;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0; i<n; i++){
        int cnt=1;
        int j=i+1; 
        while(v[i]<v[j] && j<n){
            cnt++;
            j++;
        }
        int k=i-1;
        while(v[i]<v[k] && k>=0){
            cnt++;
            k--;
        }
        int q=cnt*v[i];
        maxs.push_back(q);
    }
    int max=maxs[0];
    for(int i=0; i<maxs.size(); i++){
        if(maxs[i]>max){
            max=maxs[i];
        }
    }
    cout<<max<<endl;
}