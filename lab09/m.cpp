#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
void out(int i){
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1; i<n+1; i++){
        for(int j=1; j<=i; j++){
            v.push_back(i);
        }
    }
    for_each(v.begin(), v.end(), out);
    return 0;
}