#include <iostream>
#include <vector>
using namespace std;
int qwer(vector<int> v, int r, int t){
    int max=v[r];
    int sum=1;
    for(int i=r; i<=t; i++){
        if(v[i]>max){
            sum++;
            max=v[i];
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int r,t;
        cin>>r>>t;
        cout<<qwer(v,r,t)<<endl;
    }
}