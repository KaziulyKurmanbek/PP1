#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v;
    set<int> s;
    set<int> :: iterator it;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    for(it=s.begin(); it!=s.end(); it++){
        v.push_back(*it);
    }
    sort(v.begin(), v.end());
    do{
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}