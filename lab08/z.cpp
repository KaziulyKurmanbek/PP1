#include <iostream>
#include <cmath>
#include <stack>
#include <string>
using namespace std;
int main(){
    string name1,name2;
    cin>>name1>>name2;
    stack<char> st1;
    stack<char> st2;
    for(int i=0; i<name1.size(); i++){
        if(st1.empty()){
            if(name1[i]!='#'){
                st1.push(name1[i]);
            }else{
                continue;
            }
        }else{
            if(name1[i]=='#'){
                st1.pop();
            }else{
                st1.push(name1[i]);
            }
        }
    }
    for(int i=0; i<name2.size(); i++){
        if(st2.empty()){
            st2.push(name2[i]);
        }else{
            if(name2[i]=='#'){
                st2.pop();
            }else{
                st2.push(name2[i]);
            }
        }
    }
    if(st1.size()==st2.size()){
        while(!st1.empty()){
            if(st1.top()==st2.top()){
                st1.pop();
                st2.pop();
            }else{
                cout<<"False";
                return 0;
            }
        }
        cout<<"True";
        return 0;
    }else{
        cout<<"False";
    }
    return 0;
}
