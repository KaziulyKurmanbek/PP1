#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v;
    set <int> s;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(s.find(a) == s.end()){
            v.push_back(a);
            s.insert(a);
        }
    }
    do{
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}