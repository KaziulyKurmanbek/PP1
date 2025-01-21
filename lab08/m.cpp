#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    queue<string> q;
    for(int i=0; i<n; i++){
        int a;
        string name;
        cin>>a;
        if(a==1){
            cin>>name;
            q.push(name);
        }
        if(a==2){
            q.pop();
        }
        if(q.empty()){
            cout<<"queue is empty"<<endl;
        }else{
            cout<<q.front()<<endl;
        }
    }
}