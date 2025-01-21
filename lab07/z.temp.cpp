#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    map<char, int> m;
    
    char x;
    while(cin >> x) {
        ++m[x];
    }


    map<char, int>::iterator it;

    for(it = m.begin(); it != m.end(); ++it) {
        cout << it->first << ' ' << it->second << endl;
    }
    
}