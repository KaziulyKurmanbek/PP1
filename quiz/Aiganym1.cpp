#include <iostream>
#include <cmath>
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
    sort(v.begin(), v.end());
    int min2;
    for(int i=1; i<=v.size(); i++){
        if(v[i]!=v[i-1]){
            min2=v[i];
            break;
        }
    }
    cout<<min2<<endl;
}