#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    map<string, int> bugs;
    map<string, int>::iterator it;
    map<string, int> hunters;
    map<string, int>::iterator iter;
    for(int i=0; i<n; i++){
        string name, weakness;
        cin>>name>>weakness;
        ++bugs[weakness];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        string name, ability;
        int amount;
        cin>>name>>ability>>amount;
        hunters[ability]+=amount;
    }
    int sum=0;
    for(it=bugs.begin(); it!=bugs.end(); it++){
        for(iter=hunters.begin(); iter!=hunters.end(); iter++){
            if(it->first==iter->first){
                if(it->second>iter->second) sum+=iter->second;
                else sum+=it->second;
            }
        }
    }
    cout<<"Bugs left: "<<n-sum;
}