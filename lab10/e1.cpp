#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    double n;
    cin>>n;
    vector<int> v;
    set<int> s;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    if(ceil(n/2)>=s.size()){
        cout<<"Impossible"<<endl;
    }else{
        cout<<"Possible"<<endl;
    }
}