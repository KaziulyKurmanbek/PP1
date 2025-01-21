#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int m,start, end;
    cin>>m;
    int e,r;
    cin>>e>>r;
    start=e-1;
    end=r-1;
    v.erase(v.begin()+m);
    v.erase(v.begin()+start, v.begin()+end);
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}