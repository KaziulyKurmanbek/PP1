#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int f , s;
    cin >> f >> s;
    if(f==s){
        cout<<"0"<<endl;
    }
    else{
        if(f<s){
            cout<<"2"<<endl;
        }
        else{
            if(f>s){
                cout<<"1"<<endl;
            }
        }
    }
 return 0;
}