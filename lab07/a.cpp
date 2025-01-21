#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    vector<int>v(n);
    int sum=0;
    int sum1=0;
    for(int i=0; i<n; i++){
        v[i]=i+1;
        sum+=v[i];
    }
    for(int i=0; i<n; i++){
        cin>>vec[i];
        sum1+=vec[i];
    }
    cout<<sum-sum1;
}