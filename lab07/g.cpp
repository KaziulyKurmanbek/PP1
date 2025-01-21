#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n,k, sum=0;
    cin>>n;
    vector<int>v(n);
    cin>>k;
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    }
    int q=sum/n;
    cout<<abs(q-k);
}