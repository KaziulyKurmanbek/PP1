#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<char, int> m;
    map<char, int> :: iterator it;
    for(int i=0; i<n; i++){
        set<char> s;
        set<char> ::iterator iter;
        string word;
        cin>>word;
        for(int j=0; j<word.size(); j++){
            s.insert(word[j]);
        }
        for(iter=s.begin(); iter!=s.end(); iter++){
            ++m[(*iter)];
        }
    }
    for(it=m.begin(); it!=m.end(); it++){
        if(it->second==n){
            
        }
    }
    return 0; 
}