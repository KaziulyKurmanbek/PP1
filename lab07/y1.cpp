#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n,m;  
    cin >> n;
    map<string,string> s;
    map<string,string> :: iterator it;
    for(int i=0; i<n; i++){
        string name1;
        int number;
        cin>>name1>>number;
        for(int q=0; q<number; q++){
            string name2;
            cin>>name2;
            s[name2]=name1;
        }
    }
    cin>>m;
    for(int i=0; i<m; ++i){
        bool no_assist=true;
        string name_search;
        cin>>name_search;
        for(it=s.begin(); it!=s.end(); ++it){
            if(it->first==name_search){
                cout<<it->second<<endl;
                no_assist=false;
                break;
            }
        }
        if(no_assist){
            cout<<"F"<<endl;
        }
    }
    return 0;
}