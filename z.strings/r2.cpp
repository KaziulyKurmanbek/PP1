#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    cout<<s[0]<<endl;
    cout<<s.at(0)<<endl;
    cout<<s.front()<<endl;
    cout<<*s.begin()<<endl;
    s.insert(2,"pre");
    s.erase(2,3);
    int a;
    a = atoi(s.c_str());
    return 0;
}