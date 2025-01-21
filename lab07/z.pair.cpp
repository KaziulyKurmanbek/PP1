#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    map<pair<string, int>, int > m; 
    map<pair<string, int>, int > :: iterator it;
    for(int i=0; i<3; i++){
        int n;
        string s;
        cin>>s>>n;
        pair<string, int> par = make_pair(s,n);
        ++m[par];
    }
    for(it=m.begin(); it!=m.end(); ++it){
        cout << it->first.first << it->first.second <<"________"<< it ->second << endl;
    }
}