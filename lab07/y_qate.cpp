#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;  
    cin >> n;
    map<string, set<string>> m;  

    for (int i = 0; i < n; i++) {
        string name;
        int number;
        cin >> name >> number;  
        set<string> v;  

        for (int j = 0; j < number; j++) {
            string assist;  
            cin >> assist;  
            v.insert(assist);  
        }

        m[name] = v;  
    }

    int mCount; 
    cin >> mCount;  

    for (int i = 0; i < mCount; i++) {
        bool notfound=true;
        string name;  
        cin >> name;  
        map<string, set<string>>::iterator it;  
        set<string>::iterator its;
        for(it=m.begin(); it!=m.end(); it++){
            for(its=it->second.begin(); its!=it->second.end(); its++){
                if(name==*its){
                    cout<<it->first<<endl;
                    notfound=false;
                    break;
                }
            }
        }
        if(notfound){
            cout<<"F"<<endl;
        }
    }

    return 0;
}
