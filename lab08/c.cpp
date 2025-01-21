#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> m;
    map<int,int> :: iterator it;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        ++m[a];
    }
    int sum=0;
    for(it=m.begin(); it!=m.end(); it++){
        if(it->second>=2){
            sum++;
        }
    }
    cout<<sum;
}