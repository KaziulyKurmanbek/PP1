#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    stack<int> q;
    int a;
    while(cin>>a){
        q.push(a);
    }
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    return 0;
}