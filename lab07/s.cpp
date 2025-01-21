#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
void output(map<pair<string, int>, int> m, map<string, int> maps){
    map<pair<string, int>,int > :: iterator it;
    map<string, int> ::iterator its;
    for(its=maps.begin(); its!=maps.end(); ++its){
        int sum=0;
        for(it=m.begin(); it!=m.end(); ++it){
            if(its->first==it->first.first){
                sum++;
            }
        }
        if(sum>=3){
            cout<<its->first<<" "<<"+1"<<endl;
        }else{
            cout<<its->first<<" NO BONUS"<<endl;
        }
    }
}
int main(){
    int n; 
    cin>>n;
    map<pair<string, int>, int> m;
    map<string, int> maps;
    map<pair<string, int>, int> :: iterator it;
    for(int i=0; i<n; i++){
        string name;
        int score;
        cin>>name>>score;
        pair<string, int> para = make_pair(name,score);
        ++m[para];
        ++maps[name];
    }
    output(m,maps);
}