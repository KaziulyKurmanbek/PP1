#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    map<char, int> m;
    
    string x;
    cin>>x;
    for(int i=0; i<x.size(); i++){
        ++m[x[i]];
    }

    map<char, int>::iterator it;

    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << ' ' << it->second << endl;
    }
    
}