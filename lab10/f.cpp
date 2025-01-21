#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
bool cmp(pair<string, double> p1, pair<string, double> p2){
    if(p1.second!=p2.second){
        return p1.second>p2.second;
    }else{
        return p1.first<p2.first;
    }
}
struct student{
    int appear;
    double score;
};
int main(){
    int n;
    cin>>n;
    map<string, student> m;
    map<string, student> ::iterator it;
    for(int i=0; i<n; i++){
        double score;
        string name;
        cin>>name>>score;
        m[name].score+=score;
        ++m[name].appear;
    }
    vector<pair<string, double> >v;
    for(it=m.begin(); it!=m.end(); it++){
        v.push_back(make_pair(it->first, it->second.score/it->second.appear));
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<": ";
        printf("%.3f\n", v[i].second);
    }
}