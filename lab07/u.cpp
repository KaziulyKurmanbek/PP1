#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin>>n;
    vector<pair<string,string> > v;
    for(int i=0; i<n; i++){
        string names;
        cin>>names;
    }
    cin>>m;
    for(int i=0; i<m; i++){
        string ingredient1, ingredient2;
        cin>>ingredient1>>ingredient2;
        pair<string,string> para=make_pair(ingredient1, ingredient2);
        v.push_back(para);
    }
    string main_ing;
    cin>>main_ing;
    set<string> spisok;
    set<string>::iterator it;
    for(int i=0; i<v.size(); i++){
        if(v[i].first==main_ing){
            spisok.insert(v[i].second);
        }
        if(v[i].second==main_ing){
            spisok.insert(v[i].first);
        }
    }
    cout<<spisok.size()<<endl;
    for(it=spisok.begin(); it!=spisok.end(); it++){
        cout<<*it<<" ";
    }
}