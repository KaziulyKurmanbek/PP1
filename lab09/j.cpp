#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v1;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    vector<int> v2=v1;
    reverse(v1.begin(), v1.end());
    for(int i=0; i<v1.size(); i++){
        if(v1[i]==v2[i]){
            cout<<"OK"<<endl;
        }else{
            cout<<"Instead of "<<v2[i]<<" here was "<<v1[i]<<endl;
        }
    }
    return 0;
}