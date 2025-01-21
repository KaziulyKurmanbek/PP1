#include <set>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    set<pair<string,int> > s;
    set<pair<string,int> > :: iterator it;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int score;
        string name;
        cin>>name>>score;
        s.insert(make_pair(name,score));
    }
    for(it=s.begin(); it!=s.end(); it++){
        if((*it).second>=30){
            cout<<(*it).first<<endl;
        }
    }
}