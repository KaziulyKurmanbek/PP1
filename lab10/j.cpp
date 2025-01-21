#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>m;
    map<int,int>::iterator it;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        ++m[a];
    }
    it=m.begin();
    cout<<(++it)->second<<endl;
    return 0;
}