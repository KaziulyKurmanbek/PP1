#include <set>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string,int> m;
    map<string,int> :: iterator it;
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        int score;
        string name;
        cin>>name>>score;
        m[name]+=score;
    }
    for(it=m.begin(); it!=m.end(); it++){
        if((it->second)>=30){
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
}