#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<pair<pair<string, int>, pair<string,int> >, int> m;
    map<pair<pair<string, int>, pair<string,int> >, int> :: iterator it;
    for(int i=0; i<n; i++){
        string name1, name2;
        int num1, num2;
        cin>>name1>>num1>>name2>>num2;
       ++m[make_pair(make_pair(name1, num1), make_pair(name2, num2))];
    }
    for(it=m.begin(); it!=m.end(); it++){
        cout<<(it->first).first.first<<" and "<<(it->first).second.first<<" "<<(it->first.first.second)+(it->first.second.second)<<endl;
    }
}