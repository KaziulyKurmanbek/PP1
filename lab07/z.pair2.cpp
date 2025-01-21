#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    pair<string, string> s1=make_pair("lol", "kek");
    pair<string, string> s2=make_pair( "kek","lol");
    if(s1!=s2) cout<<"YES";
    else{
        cout<<"NO";
    }
}