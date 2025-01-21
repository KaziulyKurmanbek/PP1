#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int i=0;
string push(string s, int n, string &ne){
    if(i==s.size()) return ne;
    ne.push_back(char(s[i]-'A'+n)%26+'A');
    i++;
    return push(s, n, ne);
}
int main(){
    int n;
    string s;
    cin>>n>>s;
    string ne;
    cout<<push(s,n,ne)<<endl;
}