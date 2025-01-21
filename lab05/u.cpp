#include <iostream>
#include <string>

using namespace std;

int main() {
    char k;
    cin>>k;
    string s;
    cin >> s;
    for(int i=0; i<s.size();i++){
        if(s[i]!=k)cout<<s[i];
    }
    return 0;
}
