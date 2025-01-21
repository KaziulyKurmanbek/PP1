#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int sum=0;
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
        cin>>v[i];
        sum+=v[i];
    }
    cout<<sum<<endl;
    for(int i=0; i<n; ++i){
        cout<<v[i]*i<<endl;
    }
    return 0;
}