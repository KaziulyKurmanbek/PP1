#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n,1); 
    cout<<v.size()<<endl;
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    for(int i=1001; i<2000; i++){
        cout<<v[i]<<" ";
    }
    //cout<<endl<<v[10]<<endl;
}