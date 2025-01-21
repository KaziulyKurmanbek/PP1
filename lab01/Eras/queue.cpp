#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    queue<int> q;
    int a;
    while(cin>>a){
        q.push(a);
    }
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}