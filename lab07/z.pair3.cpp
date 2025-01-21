#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    pair<string, string> s1=make_pair("lol", "kek");
    pair<string, string> s2=make_pair( "lol", "sheesh");
    set< pair<string, string> > s;
    set< pair<string, string> > :: iterator item;
    s.insert(s1);
    s.insert(s2);
    for(item=s.end(); item!=s.begin(); item--){
        cout<<(*item).first<<"____"<<(*item).second<<endl;
    }
}