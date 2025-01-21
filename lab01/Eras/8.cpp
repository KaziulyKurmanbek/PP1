#include <iostream>
#include <iomanip>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    double sum=0.0;
    for(int i=0; i<n; ++i){
        int a;
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    cout<<fixed<<setprecision(2)<<(sum/n)<<endl;
    double m=(sum/n);
    for(int i=0; i<n; i++){
        cout<<fixed<<setprecision(2)<<(m-v[i])*(m-v[i])<<endl;
    }
    return 0;
}