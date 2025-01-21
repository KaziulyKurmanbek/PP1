#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<pair<pair<string, int>,pair<string, int> > > s;
    set<pair<pair<string, int>,pair<string, int> > > :: iterator it;
    for(int i=0; i<n; i++){
        string name1,name2;
        int score1,score2;
        cin>>name1>>score1>>name2>>score2;
        s.insert(make_pair(make_pair(name1,score1), make_pair(name2,score2)));
    }
    map<string , int> m;
    for(it=s.begin(); it!=s.end(); ++it){
        string name = (*it).first.first+" and "+(*it).second.first;
        int score=(*it).first.second+(*it).second.second;
        cout<<name<<" "<<score<<endl;
    }
}