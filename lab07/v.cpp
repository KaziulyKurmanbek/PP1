#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
void set_com(map<string, string> &m){
    string key, value;
    cin>>key>>value;
    m[key]=value;
}
void get_com(map<string, string> &m){
    bool result=false;
    map<string, string> :: iterator it;
    string key;
    cin>>key;
    for(it=m.begin(); it!=m.end(); it++){
        if(it->first==key){
            cout<<it->second<<endl;
            result=true;
            break;
        }
    }
    if(!result){
        cout<<"KE: no key "<<key<<" found in the document"<<endl;
    }
}
int main(){
    map<string,string> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string command;
        cin>>command;
        if(command=="set") set_com(m);
        if(command=="get") get_com(m);
    }
    return 0;
}