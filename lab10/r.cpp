#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int> >v;
    for(int i=0; i<n; i++){
        vector<int> v2; 
        for(int j=0; j<n; j++){
            int a;
            cin>>a;
            v2.push_back(a);
        }
        v.push_back(v2);
    }
    for(int i=0; i<v.size(); i++){
        int num=v[i][0];
        int sum=0;
        for(int j=1; j<v[i].size(); j++){
            if(v[i][j]>num){
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}