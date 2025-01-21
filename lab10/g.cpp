#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<string> s;
    set<string> ss;
    vector<string> v;
    for(int i=0; i<n; i++){
        string name;
        cin>>name;
        if(s.find(name)==s.end()){
            s.insert(name);
        }else{
            if(ss.find(name)==ss.end()){
                ss.insert(name);
                v.push_back(name);
            }
        }
    }
    if(v.size()==0){
        cout<<"Understandable, have a great day"<<endl;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}