#include <iostream>
#include <bitset>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int x,n,a;
    cin>>x;
    n=x%2;
    a=x/2;
    string s= to_string(n);
    string f=0;
    f=f+s;
    while(a!=1){
        n=n%2;
        a=a/2;
        string s= to_string(n);
        string f=0;
        f=f+s;
    }
    cout<<f<<endl;
    return 0;
} 