#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, int> m;
    map<string, int> ::iterator its;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        ++m[str];
    }
    int sum=0;
    for(its=m.begin(); its!=m.end(); its++){
        if(its->second==3){
            sum++;
        }
    }
    cout<<sum<<endl;
}