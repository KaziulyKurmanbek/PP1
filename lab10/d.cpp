#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
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
    for(it=m.begin(); it!=m.end(); it++){
        cout<<fixed<<setprecision(6);
        cout<<it->first<<" "<<(it->second.score/it->second.appear)<<endl;
    }
}
