#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int q,w,sum;
        cin>>q>>w;
        sum=q+w;
        v.push_back(sum);
    }
    for(int i=0; i<v.size(); i++){
        int san = v[i];
        int sum=0;
        for(int j=i-1; j>=0; j--){
            if(v[j]==san){
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}