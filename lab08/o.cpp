#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n,q;
    cin>>n;
    map<string, string> m;
    map<string, string>::iterator it;
    for(int i=0; i<n; i++){
        string correct_login;
        string correct_password;
        cin>>correct_login>>correct_password;
        m[correct_login]=correct_password;
    }
    cin>>q;
    for(int i=0; i<q; i++){
        string login, password;
        cin>>login>>password;
        if (m[login] != ""){
            if(m[login]==password){
                cout<<"correct password"<<endl;
            }else{
                cout<<"password error"<<endl;
            }
        }else{
            cout<<"login error"<<endl;
        }
    }
}