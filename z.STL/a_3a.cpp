#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n, 1); 
    cout<<v.size()<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}